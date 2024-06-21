/* generated common source file - do not edit */
#include "common_data.h"
icu_instance_ctrl_t g_external_irq1_ctrl;
const external_irq_cfg_t g_external_irq1_cfg =
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
const external_irq_instance_t g_external_irq1 =
{ .p_ctrl = &g_external_irq1_ctrl, .p_cfg = &g_external_irq1_cfg, .p_api = &g_external_irq_on_icu };
/** Display framebuffer */
#if GLCDC_CFG_LAYER_1_ENABLE
        uint8_t fb_background[2][DISPLAY_BUFFER_STRIDE_BYTES_INPUT0 * DISPLAY_VSIZE_INPUT0] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION(".sdram");
        #else
/** Graphics Layer 1 is specified not to be used when starting */
#endif
#if GLCDC_CFG_LAYER_2_ENABLE
        uint8_t fb_foreground[2][DISPLAY_BUFFER_STRIDE_BYTES_INPUT1 * DISPLAY_VSIZE_INPUT1] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION(".sdram");
        #else
/** Graphics Layer 2 is specified not to be used when starting */
#endif

#if GLCDC_CFG_CLUT_ENABLE
        /** Display CLUT buffer to be used for updating CLUT */
        static uint32_t CLUT_buffer[256];

        /** Display CLUT configuration(only used if using CLUT format) */
        display_clut_cfg_t g_display0_clut_cfg_glcdc =
        {
            .p_base              = (uint32_t *)CLUT_buffer,
            .start               = 0,   /* User have to update this setting when using */
            .size                = 256  /* User have to update this setting when using */
        };
        #else
/** CLUT is specified not to be used */
#endif

#if (false)
         #define GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST   const
         #define GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST    (uint16_t *)
         #define GLCDC_CFG_CORRECTION_GAMMA_CFG_CAST      (display_gamma_correction_t *)
        #else
#define GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST
#define GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST
#define GLCDC_CFG_CORRECTION_GAMMA_CFG_CAST
#endif

#if ((GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B) && GLCDC_CFG_COLOR_CORRECTION_ENABLE)
        /** Gamma correction tables */
        #if GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R
        static GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST uint16_t glcdc_gamma_r_gain[DISPLAY_GAMMA_CURVE_ELEMENT_NUM] = {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024};
        static GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST uint16_t glcdc_gamma_r_threshold[DISPLAY_GAMMA_CURVE_ELEMENT_NUM] = {0, 64, 128, 192, 256, 320, 384, 448, 512, 576, 640, 704, 768, 832, 896, 960};
        #endif
        #if GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G
        static GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST uint16_t glcdc_gamma_g_gain[DISPLAY_GAMMA_CURVE_ELEMENT_NUM] = {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024};
        static GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST uint16_t glcdc_gamma_g_threshold[DISPLAY_GAMMA_CURVE_ELEMENT_NUM] = {0, 64, 128, 192, 256, 320, 384, 448, 512, 576, 640, 704, 768, 832, 896, 960};
        #endif
        #if GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B
        static GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST uint16_t glcdc_gamma_b_gain[DISPLAY_GAMMA_CURVE_ELEMENT_NUM] = {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024};
        static GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST uint16_t glcdc_gamma_b_threshold[DISPLAY_GAMMA_CURVE_ELEMENT_NUM] = {0, 64, 128, 192, 256, 320, 384, 448, 512, 576, 640, 704, 768, 832, 896, 960};
        #endif
        GLCDC_CFG_CORRECTION_GAMMA_TABLE_CONST display_gamma_correction_t g_display0_gamma_cfg =
        {
            .r =
            {
                .enable      = GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R,
        #if GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R
                .gain        = GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST glcdc_gamma_r_gain,
                .threshold   = GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST glcdc_gamma_r_threshold
        #else
                .gain        = NULL,
                .threshold   = NULL
        #endif
            },
            .g =
            {
                .enable      = GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G,
        #if GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G
                .gain        = GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST glcdc_gamma_g_gain,
                .threshold   = GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST glcdc_gamma_g_threshold
        #else
                .gain        = NULL,
                .threshold   = NULL
        #endif
            },
            .b =
            {
                .enable      = GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B,
        #if GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B
                .gain        = GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST glcdc_gamma_b_gain,
                .threshold   = GLCDC_CFG_CORRECTION_GAMMA_TABLE_CAST glcdc_gamma_b_threshold
        #else
                .gain        = NULL,
                .threshold   = NULL
        #endif
            }
        };
        #endif

#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED != RA_NOT_DEFINED)
          const mipi_dsi_instance_t RA_NOT_DEFINED;
        #endif
/** Display device extended configuration */
const glcdc_extended_cfg_t g_display0_extend_cfg =
{ .tcon_hsync = GLCDC_TCON_PIN_1,
  .tcon_vsync = GLCDC_TCON_PIN_0,
  .tcon_de = GLCDC_TCON_PIN_2,
  .correction_proc_order = GLCDC_CORRECTION_PROC_ORDER_BRIGHTNESS_CONTRAST2GAMMA,
  .clksrc = GLCDC_CLK_SRC_INTERNAL,
  .clock_div_ratio = GLCDC_PANEL_CLK_DIVISOR_8,
  .dithering_mode = GLCDC_DITHERING_MODE_TRUNCATE,
  .dithering_pattern_A = GLCDC_DITHERING_PATTERN_11,
  .dithering_pattern_B = GLCDC_DITHERING_PATTERN_11,
  .dithering_pattern_C = GLCDC_DITHERING_PATTERN_11,
  .dithering_pattern_D = GLCDC_DITHERING_PATTERN_11,
#if (RA_NOT_DEFINED != RA_NOT_DEFINED)
            .phy_layer             = (void*)&RA_NOT_DEFINED
        #else
  .phy_layer = NULL
#endif
        };
#undef RA_NOT_DEFINED

/** Display control block instance */
glcdc_instance_ctrl_t g_display0_ctrl;

/** Display interface configuration */
const display_cfg_t g_display0_cfg =
        {
        /** Input1(Graphics1 layer) configuration */
        .input[0] =
        {
#if GLCDC_CFG_LAYER_1_ENABLE
                .p_base              = (uint32_t *)&fb_background[0],
                #else
          .p_base = NULL,
#endif
          .hsize = DISPLAY_HSIZE_INPUT0,
          .vsize = DISPLAY_VSIZE_INPUT0, .hstride = DISPLAY_BUFFER_STRIDE_PIXELS_INPUT0, .format =
                  DISPLAY_IN_FORMAT_16BITS_RGB565,
          .line_descending_enable = false, .lines_repeat_enable = false, .lines_repeat_times = 0 },

          /** Input2(Graphics2 layer) configuration */
          .input[1] =
          {
#if GLCDC_CFG_LAYER_2_ENABLE
                .p_base              = (uint32_t *)&fb_foreground[0],
                #else
            .p_base = NULL,
#endif
            .hsize = DISPLAY_HSIZE_INPUT1,
            .vsize = DISPLAY_VSIZE_INPUT1, .hstride = DISPLAY_BUFFER_STRIDE_PIXELS_INPUT1, .format =
                    DISPLAY_IN_FORMAT_16BITS_RGB565,
            .line_descending_enable = false, .lines_repeat_enable = false, .lines_repeat_times = 0 },

          /** Input1(Graphics1 layer) layer configuration */
          .layer[0] =
          { .coordinate =
          { .x = 0, .y = 0 },
            .bg_color =
            { .byte =
            { .a = 255, .r = 255, .g = 255, .b = 255 } },
            .fade_control = DISPLAY_FADE_CONTROL_NONE, .fade_speed = 0 },

          /** Input2(Graphics2 layer) layer configuration */
          .layer[1] =
          { .coordinate =
          { .x = 0, .y = 0 },
            .bg_color =
            { .byte =
            { .a = 255, .r = 255, .g = 255, .b = 255 } },
            .fade_control = DISPLAY_FADE_CONTROL_NONE, .fade_speed = 0 },

          /** Output configuration */
          .output =
                  { .htiming =
                  { .total_cyc = 559, .display_cyc = 480, .back_porch = 5, .sync_width = 2, .sync_polarity =
                            DISPLAY_SIGNAL_POLARITY_LOACTIVE },
                    .vtiming =
                    { .total_cyc = 894, .display_cyc = 854, .back_porch = 20, .sync_width = 3, .sync_polarity =
                              DISPLAY_SIGNAL_POLARITY_LOACTIVE },
                    .format = DISPLAY_OUT_FORMAT_24BITS_RGB888, .endian = DISPLAY_ENDIAN_LITTLE, .color_order =
                            DISPLAY_COLOR_ORDER_RGB,
                    .data_enable_polarity = DISPLAY_SIGNAL_POLARITY_HIACTIVE, .sync_edge =
                            DISPLAY_SIGNAL_SYNC_EDGE_FALLING,
                    .bg_color =
                    { .byte =
                    { .a = 255, .r = 0, .g = 0, .b = 0 } },
#if (GLCDC_CFG_COLOR_CORRECTION_ENABLE)
                .brightness =
                {
                    .enable          = false,
                    .r               = 512,
                    .g               = 512,
                    .b               = 512
                },
                .contrast =
                {
                    .enable          = false,
                    .r               = 128,
                    .g               = 128,
                    .b               = 128
                },
#if (GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B)
 #if false
                .p_gamma_correction  = GLCDC_CFG_CORRECTION_GAMMA_CFG_CAST (&g_display0_gamma_cfg),
 #else
                .p_gamma_correction  = &g_display0_gamma_cfg,
 #endif
#else
                .p_gamma_correction  = NULL,
#endif
#endif
                    .dithering_on = false },

          /** Display device callback function pointer */
          .p_callback = NULL,
          .p_context = NULL,

          /** Display device extended configuration */
          .p_extend = (void*) (&g_display0_extend_cfg),

          .line_detect_ipl = (12),
          .underflow_1_ipl = (BSP_IRQ_DISABLED), .underflow_2_ipl = (BSP_IRQ_DISABLED),

#if defined(VECTOR_NUMBER_GLCDC_LINE_DETECT)
            .line_detect_irq        = VECTOR_NUMBER_GLCDC_LINE_DETECT,
#else
          .line_detect_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GLCDC_UNDERFLOW_1)
            .underflow_1_irq        = VECTOR_NUMBER_GLCDC_UNDERFLOW_1,
#else
          .underflow_1_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GLCDC_UNDERFLOW_2)
            .underflow_2_irq        = VECTOR_NUMBER_GLCDC_UNDERFLOW_2,
#else
          .underflow_2_irq = FSP_INVALID_VECTOR,
#endif
        };

#if GLCDC_CFG_LAYER_1_ENABLE
        /** Display on GLCDC run-time configuration(for the graphics1 layer) */
        display_runtime_cfg_t g_display0_runtime_cfg_bg =
        {
            .input =
            {
                #if (true)
                .p_base              = (uint32_t *)&fb_background[0],
                #else
                .p_base              = NULL,
                #endif
                .hsize               = DISPLAY_HSIZE_INPUT0,
                .vsize               = DISPLAY_VSIZE_INPUT0,
                .hstride             = DISPLAY_BUFFER_STRIDE_PIXELS_INPUT0,
                .format              = DISPLAY_IN_FORMAT_16BITS_RGB565,
                .line_descending_enable = false,
                .lines_repeat_enable = false,
                .lines_repeat_times  = 0
            },
            .layer =
            {
                .coordinate = {
                        .x           = 0,
                        .y           = 0
                },
                .bg_color            =
                {
                    .byte            =
                    {
                        .a           = 255,
                        .r           = 255,
                        .g           = 255,
                        .b           = 255
                    }
                },
                .fade_control        = DISPLAY_FADE_CONTROL_NONE,
                .fade_speed          = 0
            }
        };
#endif
#if GLCDC_CFG_LAYER_2_ENABLE
        /** Display on GLCDC run-time configuration(for the graphics2 layer) */
        display_runtime_cfg_t g_display0_runtime_cfg_fg =
        {
            .input =
            {
                #if (false)
                .p_base              = (uint32_t *)&fb_foreground[0],
                #else
                .p_base              = NULL,
                #endif
                .hsize               = DISPLAY_HSIZE_INPUT1,
                .vsize               = DISPLAY_VSIZE_INPUT1,
                .hstride             = DISPLAY_BUFFER_STRIDE_PIXELS_INPUT1,
                .format              = DISPLAY_IN_FORMAT_16BITS_RGB565,
                .line_descending_enable = false,
                .lines_repeat_enable = false,
                .lines_repeat_times  = 0
             },
            .layer =
            {
                .coordinate = {
                        .x           = 0,
                        .y           = 0
                },
                .bg_color            =
                {
                    .byte            =
                    {
                        .a           = 255,
                        .r           = 255,
                        .g           = 255,
                        .b           = 255
                    }
                },
                .fade_control        = DISPLAY_FADE_CONTROL_NONE,
                .fade_speed          = 0
            }
        };
#endif

/* Instance structure to use this module. */
const display_instance_t g_display0 =
{ .p_ctrl = &g_display0_ctrl, .p_cfg = (display_cfg_t*) &g_display0_cfg, .p_api = (display_api_t*) &g_display_on_glcdc };
const uint8_t DRW_INT_IPL = (2);
d2_device *d2_handle0;
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
elc_instance_ctrl_t g_elc_ctrl;

extern const elc_cfg_t g_elc_cfg;

const elc_instance_t g_elc =
{ .p_ctrl = &g_elc_ctrl, .p_api = &g_elc_on_elc, .p_cfg = &g_elc_cfg };
ioport_instance_ctrl_t g_ioport_ctrl;
const ioport_instance_t g_ioport =
{ .p_api = &g_ioport_on_ioport, .p_ctrl = &g_ioport_ctrl, .p_cfg = &g_bsp_pin_cfg, };
void g_common_init(void)
{
}
