/* generated common source file - do not edit */
#include "common_data.h"
#if BSP_FEATURE_CGC_HAS_OSTDCSE
const cgc_extended_cfg_t g_cgc0_cfg_extend =
{
    .ostd_enable = (1),
    .mostd_enable = (0),
    .sostd_enable = (0),
#if defined(VECTOR_NUMBER_CGC_MOSTD_STOP)
    .mostd_irq            = VECTOR_NUMBER_CGC_MOSTD_STOP,
#else
    .mostd_irq            = FSP_INVALID_VECTOR,
#endif
    .mostd_ipl            = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_CGC_SOSC_STOP)
    .sostd_irq            = VECTOR_NUMBER_CGC_SOSC_STOP,
#else
    .sostd_irq            = FSP_INVALID_VECTOR,
#endif
    .sostd_ipl            = (BSP_IRQ_DISABLED),
    .sdadc_b_clock_switch_enable = (0),
    .mostd_detection_time = 0,
    .sostd_detection_time = 0,
};
#endif

#if BSP_TZ_NONSECURE_BUILD
 #if defined(BSP_CFG_CLOCKS_SECURE) && BSP_CFG_CLOCKS_SECURE
  #error "The CGC registers are only accessible in the TrustZone Secure Project."
 #endif
#endif

const cgc_cfg_t g_cgc0_cfg =
{ .p_callback = NULL,
#if BSP_FEATURE_CGC_HAS_OSTDCSE
    .p_extend   = &g_cgc0_cfg_extend,
#else
  .p_extend = NULL,
#endif
        };

cgc_instance_ctrl_t g_cgc0_ctrl;
const cgc_instance_t g_cgc0 =
{ .p_api = &g_cgc_on_cgc, .p_ctrl = &g_cgc0_ctrl, .p_cfg = &g_cgc0_cfg, };
elc_instance_ctrl_t g_elc_ctrl;

extern const elc_cfg_t g_elc_cfg;

const elc_instance_t g_elc =
{ .p_ctrl = &g_elc_ctrl, .p_api = &g_elc_on_elc, .p_cfg = &g_elc_cfg };
icu_instance_ctrl_t g_external_irq1_ctrl;
const external_irq_cfg_t g_external_irq1_cfg =
{ .channel = 1, .trigger = EXTERNAL_IRQ_TRIG_RISING, .filter_enable = false, .clock_source_div =
          EXTERNAL_IRQ_CLOCK_SOURCE_DIV_64,
  .p_callback = NULL,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = NULL,
  .ipl = (12),
#if defined(VECTOR_NUMBER_ICU_IRQ1)
    .irq                 = VECTOR_NUMBER_ICU_IRQ1,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq1 =
{ .p_ctrl = &g_external_irq1_ctrl, .p_cfg = &g_external_irq1_cfg, .p_api = &g_external_irq_on_icu };
icu_instance_ctrl_t g_external_irq0_ctrl;
const external_irq_cfg_t g_external_irq0_cfg =
{ .channel = 0, .trigger = EXTERNAL_IRQ_TRIG_RISING, .filter_enable = false, .clock_source_div =
          EXTERNAL_IRQ_CLOCK_SOURCE_DIV_64,
  .p_callback = NULL,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = NULL,
  .ipl = (12),
#if defined(VECTOR_NUMBER_ICU_IRQ0)
    .irq                 = VECTOR_NUMBER_ICU_IRQ0,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq0 =
{ .p_ctrl = &g_external_irq0_ctrl, .p_cfg = &g_external_irq0_cfg, .p_api = &g_external_irq_on_icu };
ioport_instance_ctrl_t g_ioport_ctrl;
const ioport_instance_t g_ioport =
{ .p_api = &g_ioport_on_ioport, .p_ctrl = &g_ioport_ctrl, .p_cfg = &g_bsp_pin_cfg, };
void g_common_init(void)
{
}
