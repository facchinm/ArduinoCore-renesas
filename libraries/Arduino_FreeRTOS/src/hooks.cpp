#include <Arduino_FreeRTOS.h>

TaskHandle_t arduino_task, tusb_task;

static SemaphoreHandle_t sem; 
static void tud_task_forever(void *pvParameters) {
    while (1) {
    #if (CFG_TUSB_RHPORT0_MODE & OPT_MODE_HOST) || (CFG_TUSB_RHPORT1_MODE & OPT_MODE_HOST)
        tuh_task();
    #endif
    #if (CFG_TUSB_RHPORT0_MODE & OPT_MODE_DEVICE) || (CFG_TUSB_RHPORT1_MODE & OPT_MODE_DEVICE)
        tud_task();
    #endif
        taskYIELD();
    }
}

void tud_task_weak() {
}


void tuh_task_weak() {

}

void tusb_task_forever_rtos() {
    sem = xSemaphoreCreateBinary();
    auto const rc_tusb = xTaskCreate
    (
      tud_task_forever,
      static_cast<const char*>("USB Thread"),
      4096,     /* usStackDepth in words */
      nullptr,     /* pvParameters */
      2,           /* uxPriority */
      &tusb_task /* pxCreatedTask */
    );
}

void arduino_main();
void arduino_main_wrapper(void *pvParameters) {
    arduino_main();
}

void delay(uint32_t ms) {
	vTaskDelay(ms * configTICK_RATE_HZ / 1000);
}

void hal_entry(void) {
    auto const rc_arduino = xTaskCreate
    (
      arduino_main_wrapper,
      static_cast<const char*>("Arduino Thread"),
      4096,      /* usStackDepth in words */
      nullptr,   /* pvParameters */
      1,         /* uxPriority */
      &arduino_task /* pxCreatedTask */
    );
    vTaskStartScheduler();
}