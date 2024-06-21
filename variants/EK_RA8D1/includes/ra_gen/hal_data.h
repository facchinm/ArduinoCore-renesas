/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_usb_basic.h"
#include "r_usb_basic_api.h"
#include "r_usb_pcdc_api.h"
#include "r_sdhi.h"
#include "r_sdmmc_api.h"
#include "r_ether_phy.h"
#include "r_ether_phy_api.h"
#include "r_ether.h"
#include "r_ether_api.h"
#include "r_lpm.h"
#include "r_lpm_api.h"
#include "r_wdt.h"
#include "r_wdt_api.h"
#include "r_cac.h"
#include "r_cac_api.h"
#include "r_capture_api.h"
#include "r_ceu.h"
#include "r_sci_b_uart.h"
#include "r_uart_api.h"
#include "r_dtc.h"
#include "r_transfer_api.h"
#include "r_spi_b.h"
#include "r_sci_b_spi.h"
#include "r_spi_api.h"
#include "r_sci_b_lin.h"
#include "r_lin_api.h"
#include "r_i3c.h"
#include "r_i2s_api.h"
#include "r_ssi.h"
#include "r_iic_slave.h"
#include "r_i2c_slave_api.h"
#include "r_sci_b_i2c.h"
#include "r_i2c_master_api.h"
#include "r_iic_master.h"
#include "r_i2c_master_api.h"
#include "r_canfd.h"
#include "r_can_api.h"
#include "rm_adpcm_decoder.h"
#include "r_dac.h"
#include "r_dac_api.h"
#include "r_adc.h"
#include "r_adc_api.h"
#include "r_flash_hp.h"
#include "r_flash_api.h"
#include "r_ulpt.h"
#include "r_timer_api.h"
#include "r_agt.h"
#include "r_timer_api.h"
#include "r_gpt.h"
#include "r_timer_api.h"
#include "r_rtc.h"
#include "r_rtc_api.h"
#include "r_dmac.h"
#include "r_transfer_api.h"
FSP_HEADER
/* Basic on USB Instance. */
extern const usb_instance_t g_basic0;

/** Access the USB instance using these structures when calling API functions directly (::p_api is not used). */
extern usb_instance_ctrl_t g_basic0_ctrl;
extern const usb_cfg_t g_basic0_cfg;

#ifndef NULL
void NULL(void*);
#endif

#if 0 == BSP_CFG_RTOS
#ifndef NULL
void NULL(usb_callback_args_t*);
#endif
#endif

#if 2 == BSP_CFG_RTOS
#ifndef NULL
void NULL(usb_event_info_t *, usb_hdl_t, usb_onoff_t);
#endif
#endif
/** CDC Driver on USB Instance. */
/** SDMMC on SDMMC Instance. */
extern const sdmmc_instance_t g_sdmmc0;

/** Access the SDMMC instance using these structures when calling API functions directly (::p_api is not used). */
extern sdhi_instance_ctrl_t g_sdmmc0_ctrl;
extern sdmmc_cfg_t g_sdmmc0_cfg;

#ifndef NULL
void NULL(sdmmc_callback_args_t *p_args);
#endif
#ifndef ETHER_PHY_LSI_TYPE_KIT_COMPONENT
#define ETHER_PHY_LSI_TYPE_KIT_COMPONENT ETHER_PHY_LSI_TYPE_DEFAULT
#endif

#ifndef NULL
void NULL(ether_phy_instance_ctrl_t *p_instance_ctrl);
#endif

#ifndef NULL
bool NULL(ether_phy_instance_ctrl_t *p_instance_ctrl, uint32_t line_speed_duplex);
#endif

/** ether_phy on ether_phy Instance. */
extern const ether_phy_instance_t g_ether_phy1;

/** Access the Ethernet PHY instance using these structures when calling API functions directly (::p_api is not used). */
extern ether_phy_instance_ctrl_t g_ether_phy1_ctrl;
extern const ether_phy_cfg_t g_ether_phy1_cfg;
extern const ether_phy_extended_cfg_t g_ether_phy1_extended_cfg;
#ifndef ETHER_PHY_LSI_TYPE_KIT_COMPONENT
  #define ETHER_PHY_LSI_TYPE_KIT_COMPONENT ETHER_PHY_LSI_TYPE_DEFAULT
#endif

#ifndef NULL
void NULL(ether_phy_instance_ctrl_t *p_instance_ctrl);
#endif

#ifndef NULL
bool NULL(ether_phy_instance_ctrl_t *p_instance_ctrl, uint32_t line_speed_duplex);
#endif

/** ether_phy on ether_phy Instance. */
extern const ether_phy_instance_t g_ether_phy0;

/** Access the Ethernet PHY instance using these structures when calling API functions directly (::p_api is not used). */
extern ether_phy_instance_ctrl_t g_ether_phy0_ctrl;
extern const ether_phy_cfg_t g_ether_phy0_cfg;
extern const ether_phy_extended_cfg_t g_ether_phy0_extended_cfg;
#if (BSP_FEATURE_TZ_HAS_TRUSTZONE == 1) && (BSP_TZ_SECURE_BUILD != 1) && (BSP_TZ_NONSECURE_BUILD != 1) && (BSP_FEATURE_ETHER_SUPPORTS_TZ_SECURE == 0)
#define ETHER_BUFFER_PLACE_IN_SECTION BSP_PLACE_IN_SECTION(".ns_buffer.eth")
#else
#define ETHER_BUFFER_PLACE_IN_SECTION
#endif

/** ether on ether Instance. */
extern const ether_instance_t g_ether0;

/** Access the Ethernet instance using these structures when calling API functions directly (::p_api is not used). */
extern ether_instance_ctrl_t g_ether0_ctrl;
extern const ether_cfg_t g_ether0_cfg;

#ifndef NULL
void NULL(ether_callback_args_t *p_args);
#endif
/** lpm Instance */
extern const lpm_instance_t g_lpm0;

/** Access the LPM instance using these structures when calling API functions directly (::p_api is not used). */
extern lpm_instance_ctrl_t g_lpm0_ctrl;
extern const lpm_cfg_t g_lpm0_cfg;
/** WDT on WDT Instance. */
extern const wdt_instance_t g_wdt0;

/** Access the WDT instance using these structures when calling API functions directly (::p_api is not used). */
extern wdt_instance_ctrl_t g_wdt0_ctrl;
extern const wdt_cfg_t g_wdt0_cfg;

#ifndef NULL
void NULL(wdt_callback_args_t *p_args);
#endif
/** CAC Instance */
extern const cac_instance_t g_cac0;

/** Access the CAC instance using these structures when calling API functions directly (::p_api is not used). */
extern cac_instance_ctrl_t g_cac0_ctrl;
extern const cac_cfg_t g_cac0_cfg;

#ifndef NULL
void NULL(cac_callback_args_t *p_args);
#endif
/* CEU on CAPTURE instance */
extern const capture_instance_t g_ceu0;
/* Access the CEU instance using these structures when calling API functions directly (::p_api is not used). */
extern ceu_instance_ctrl_t g_ceu0_ctrl;
extern const capture_cfg_t g_ceu0_cfg;
#ifndef g_ceu0_user_callback
void g_ceu0_user_callback(capture_callback_args_t *p_args);
#endif
/** UART on SCI Instance. */
extern const uart_instance_t g_uart0;

/** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
extern sci_b_uart_instance_ctrl_t g_uart0_ctrl;
extern const uart_cfg_t g_uart0_cfg;
extern const sci_b_uart_extended_cfg_t g_uart0_cfg_extend;

#ifndef NULL
void NULL(uart_callback_args_t *p_args);
#endif
/* Transfer on DTC Instance. */
extern const transfer_instance_t g_transfer6;

/** Access the DTC instance using these structures when calling API functions directly (::p_api is not used). */
extern dtc_instance_ctrl_t g_transfer6_ctrl;
extern const transfer_cfg_t g_transfer6_cfg;
/* Transfer on DTC Instance. */
extern const transfer_instance_t g_transfer5;

/** Access the DTC instance using these structures when calling API functions directly (::p_api is not used). */
extern dtc_instance_ctrl_t g_transfer5_ctrl;
extern const transfer_cfg_t g_transfer5_cfg;
/** SPI on SPI Instance. */
extern const spi_instance_t g_spi0;

/** Access the SPI instance using these structures when calling API functions directly (::p_api is not used). */
extern spi_b_instance_ctrl_t g_spi0_ctrl;
extern const spi_cfg_t g_spi0_cfg;

/** Callback used by SPI Instance. */
#ifndef spi_callback
void spi_callback(spi_callback_args_t *p_args);
#endif

#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == g_transfer5)
    #define g_spi0_P_TRANSFER_TX (NULL)
#else
#define g_spi0_P_TRANSFER_TX (&g_transfer5)
#endif
#if (RA_NOT_DEFINED == g_transfer6)
    #define g_spi0_P_TRANSFER_RX (NULL)
#else
#define g_spi0_P_TRANSFER_RX (&g_transfer6)
#endif
#undef RA_NOT_DEFINED
/* Transfer on DTC Instance. */
extern const transfer_instance_t g_transfer4;

/** Access the DTC instance using these structures when calling API functions directly (::p_api is not used). */
extern dtc_instance_ctrl_t g_transfer4_ctrl;
extern const transfer_cfg_t g_transfer4_cfg;
/* Transfer on DTC Instance. */
extern const transfer_instance_t g_transfer3;

/** Access the DTC instance using these structures when calling API functions directly (::p_api is not used). */
extern dtc_instance_ctrl_t g_transfer3_ctrl;
extern const transfer_cfg_t g_transfer3_cfg;
/** SPI on SCI Instance. */
extern const spi_instance_t g_sci_spi0;

/** Access the SCI_B_SPI instance using these structures when calling API functions directly (::p_api is not used). */
extern sci_b_spi_instance_ctrl_t g_sci_spi0_ctrl;
extern const spi_cfg_t g_sci_spi0_cfg;

/** Called by the driver when a transfer has completed or an error has occurred (Must be implemented by the user). */
#ifndef sci_b_spi_callback
void sci_b_spi_callback(spi_callback_args_t *p_args);
#endif
/** LIN on SCI B Instance. */
extern const lin_instance_t g_lin0;

/** Access the LIN instance using these structures when calling API functions directly
 (::p_api is not used). */
extern sci_b_lin_instance_ctrl_t g_lin0_ctrl;
extern const lin_cfg_t g_lin0_cfg;
extern const sci_b_lin_extended_cfg_t g_lin0_cfg_extend;

#ifndef sci_b_lin0_callback
void sci_b_lin0_callback(lin_callback_args_t *p_args);
#endif
/** I3C on I3C Instance. */
extern const i3c_instance_t g_i3c0;

/** Access the I3C instance using these structures when calling API functions directly (::p_api is not used). */
extern i3c_instance_ctrl_t g_i3c0_ctrl;
extern const i3c_cfg_t g_i3c0_cfg;

#ifndef g_i3c0_callback
void g_i3c0_callback(i3c_callback_args_t const *const p_args);
#endif
/* Transfer on DTC Instance. */
extern const transfer_instance_t g_transfer2;

/** Access the DTC instance using these structures when calling API functions directly (::p_api is not used). */
extern dtc_instance_ctrl_t g_transfer2_ctrl;
extern const transfer_cfg_t g_transfer2_cfg;
/** SSI Instance. */
extern const i2s_instance_t g_i2s0;

/** Access the SSI instance using these structures when calling API functions directly (::p_api is not used). */
extern ssi_instance_ctrl_t g_i2s0_ctrl;
extern const i2s_cfg_t g_i2s0_cfg;

#ifndef NULL
void NULL(i2s_callback_args_t *p_args);
#endif
/** I2C Slave on IIC Instance. */
extern const i2c_slave_instance_t g_i2c_slave1;

/** Access the I2C Slave instance using these structures when calling API functions directly (::p_api is not used). */
extern iic_slave_instance_ctrl_t g_i2c_slave1_ctrl;
extern const i2c_slave_cfg_t g_i2c_slave1_cfg;

#ifndef NULL
void NULL(i2c_slave_callback_args_t *p_args);
#endif
extern const i2c_master_cfg_t g_i2c0_cfg;
/* I2C on SCI Instance. */
extern const i2c_master_instance_t g_i2c0;
#ifndef sci_b_i2c_master_callback
void sci_b_i2c_master_callback(i2c_master_callback_args_t *p_args);
#endif

extern const sci_b_i2c_extended_cfg_t g_i2c0_cfg_extend;
extern sci_b_i2c_instance_ctrl_t g_i2c0_ctrl;
/* I2C Master on IIC Instance. */
extern const i2c_master_instance_t g_i2c_master1;

/** Access the I2C Master instance using these structures when calling API functions directly (::p_api is not used). */
extern iic_master_instance_ctrl_t g_i2c_master1_ctrl;
extern const i2c_master_cfg_t g_i2c_master1_cfg;

#ifndef NULL
void NULL(i2c_master_callback_args_t *p_args);
#endif
/** CANFD on CANFD Instance. */
extern const can_instance_t g_canfd0;
/** Access the CANFD instance using these structures when calling API functions directly (::p_api is not used). */
extern canfd_instance_ctrl_t g_canfd0_ctrl;
extern const can_cfg_t g_canfd0_cfg;
extern const canfd_extended_cfg_t g_canfd0_cfg_extend;

#ifndef canfd0_callback
void canfd0_callback(can_callback_args_t *p_args);
#endif

/* Global configuration (referenced by all instances) */
extern canfd_global_cfg_t g_canfd_global_cfg;
/** ADPCM Audio Decoder Instance */
extern const adpcm_decoder_instance_t g_adpcm_decoder0;

/** Access the ADPCM Audio Decoder instance using these structures
 when calling API functions directly (::p_api is not used). */
extern adpcm_decoder_instance_ctrl_t g_adpcm_decoder0_ctrl;

extern const adpcm_decoder_cfg_t g_adpcm_decoder0_cfg;
/** DAC on DAC Instance. */
extern const dac_instance_t g_dac0;

/** Access the DAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dac_instance_ctrl_t g_dac0_ctrl;
extern const dac_cfg_t g_dac0_cfg;
/** ADC on ADC Instance. */
extern const adc_instance_t g_adc0;

/** Access the ADC instance using these structures when calling API functions directly (::p_api is not used). */
extern adc_instance_ctrl_t g_adc0_ctrl;
extern const adc_cfg_t g_adc0_cfg;
extern const adc_channel_cfg_t g_adc0_channel_cfg;

#ifndef NULL
void NULL(adc_callback_args_t *p_args);
#endif

#ifndef NULL
#define ADC_DMAC_CHANNELS_PER_BLOCK_NULL  0
#endif
/* Flash on Flash HP Instance */
extern const flash_instance_t g_flash0;

/** Access the Flash HP instance using these structures when calling API functions directly (::p_api is not used). */
extern flash_hp_instance_ctrl_t g_flash0_ctrl;
extern const flash_cfg_t g_flash0_cfg;

#ifndef NULL
void NULL(flash_callback_args_t *p_args);
#endif
/** ULPT Timer Instance */
extern const timer_instance_t g_timer2;

/** Access the ULPT instance using these structures when calling API functions directly (::p_api is not used). */
extern ulpt_instance_ctrl_t g_timer2_ctrl;
extern const timer_cfg_t g_timer2_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** AGT Timer Instance */
extern const timer_instance_t g_timer1;

/** Access the AGT instance using these structures when calling API functions directly (::p_api is not used). */
extern agt_instance_ctrl_t g_timer1_ctrl;
extern const timer_cfg_t g_timer1_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer0;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer0_ctrl;
extern const timer_cfg_t g_timer0_cfg;

#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
/* RTC Instance. */
extern const rtc_instance_t g_rtc0;

/** Access the RTC instance using these structures when calling API functions directly (::p_api is not used). */
extern rtc_instance_ctrl_t g_rtc0_ctrl;
extern const rtc_cfg_t g_rtc0_cfg;

#ifndef NULL
void NULL(rtc_callback_args_t *p_args);
#endif
/* Transfer on DTC Instance. */
extern const transfer_instance_t g_transfer1;

/** Access the DTC instance using these structures when calling API functions directly (::p_api is not used). */
extern dtc_instance_ctrl_t g_transfer1_ctrl;
extern const transfer_cfg_t g_transfer1_cfg;
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer0;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer0_ctrl;
extern const transfer_cfg_t g_transfer0_cfg;

#ifndef NULL
void NULL(transfer_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
