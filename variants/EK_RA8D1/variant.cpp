#include "Arduino.h"
#include "pinmux.inc"

extern "C" const PinMuxCfg_t g_pin_cfg[] = { 

  // MKR
  { BSP_IO_PORT_06_PIN_00,  P600 }, /*   D0     |             */
  { BSP_IO_PORT_04_PIN_14,  P414 }, /*   D1     |             */
  { BSP_IO_PORT_01_PIN_07,  P107 }, /*   D2     |             */
};

extern "C" {
    unsigned int PINCOUNT_fn() {
        return (sizeof(g_pin_cfg) / sizeof(g_pin_cfg[0]));
    }
}

int32_t getPinIndex(bsp_io_port_pin_t p) {
  int max_index = PINS_COUNT;
  int rv = -1;
  for(int i = 0; i < max_index; i++) {
    if(g_pin_cfg[i].pin == p) {
      rv = i;
      break;
    }
  }
  return rv;
}

const ioport_pin_cfg_t bsp_pin_cfg_data[] = {
  { ((uint32_t) IOPORT_CFG_PERIPHERAL_PIN | (uint32_t) IOPORT_PERIPHERAL_USB_FS), BSP_IO_PORT_04_PIN_07 },
  { ((uint32_t) IOPORT_CFG_PERIPHERAL_PIN | (uint32_t) IOPORT_PERIPHERAL_USB_FS), BSP_IO_PORT_08_PIN_14 },
  { ((uint32_t) IOPORT_CFG_PERIPHERAL_PIN | (uint32_t) IOPORT_PERIPHERAL_USB_FS), BSP_IO_PORT_08_PIN_15 },
  { ((uint32_t) IOPORT_CFG_PERIPHERAL_PIN | (uint32_t) IOPORT_PERIPHERAL_USB_HS), BSP_IO_PORT_11_PIN_01 },
};

static const ioport_cfg_t bsp_pin_cfg = {
  .number_of_pins = sizeof(bsp_pin_cfg_data) / sizeof(ioport_pin_cfg_t),
  .p_pin_cfg_data = &bsp_pin_cfg_data[0],
};
static ioport_instance_ctrl_t ioport_ctrl;

void initVariant() {
  SCB_DisableICache();
  R_IOPORT_Open(&ioport_ctrl, &bsp_pin_cfg);
}
