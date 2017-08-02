/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 ******************************************************************************/

#ifndef	__HALBT_PRECOMP_H__
#define __HALBT_PRECOMP_H__
/*************************************************************
 * include files
 *************************************************************/
#include "../wifi.h"
#include "../efuse.h"
#include "../base.h"
#include "../regd.h"
#include "../cam.h"
#include "../ps.h"
#include "../pci.h"

#include "halbtcoutsrc.h"

/* for uncooked code */
#define boolean bool
#define BOOLEAN	bool
#define IN
#define OUT

#define ex_halbtc8192e2ant_halt_notify	ex_btc8192e2ant_halt_notify
#define ex_halbtc8822b1ant_power_on_setting	ex_btc8822b1ant_power_on_setting
#define ex_halbtc8822b1ant_pre_load_firmware	ex_btc8822b1ant_pre_load_firmware
#define ex_halbtc8822b1ant_init_hw_config	ex_btc8822b1ant_init_hw_config
#define ex_halbtc8822b1ant_init_coex_dm	ex_btc8822b1ant_init_coex_dm
#define ex_halbtc8822b1ant_ips_notify	ex_btc8822b1ant_ips_notify
#define ex_halbtc8822b1ant_lps_notify	ex_btc8822b1ant_lps_notify
#define ex_halbtc8822b1ant_scan_notify	ex_btc8822b1ant_scan_notify
#define ex_halbtc8822b1ant_connect_notify	ex_btc8822b1ant_connect_notify
#define ex_halbtc8822b1ant_media_status_notify	ex_btc8822b1ant_media_status_notify
#define ex_halbtc8822b1ant_specific_packet_notify	ex_btc8822b1ant_specific_packet_notify
#define ex_halbtc8822b1ant_bt_info_notify	ex_btc8822b1ant_bt_info_notify
#define ex_halbtc8822b1ant_rf_status_notify	ex_btc8822b1ant_rf_status_notify
#define ex_halbtc8822b1ant_halt_notify	ex_btc8822b1ant_halt_notify
#define ex_halbtc8822b1ant_pnp_notify	ex_btc8822b1ant_pnp_notify
#define ex_halbtc8822b1ant_coex_dm_reset	ex_btc8822b1ant_coex_dm_reset
#define ex_halbtc8822b1ant_periodical	ex_btc8822b1ant_periodical
#define ex_halbtc8822b1ant_display_coex_info	ex_btc8822b1ant_display_coex_info
#define ex_halbtc8822b1ant_antenna_detection	ex_btc8822b1ant_antenna_detection
#define ex_halbtc8822b1ant_display_ant_detection	ex_btc8822b1ant_display_ant_detection
#define ex_halbtc8822b1ant_dbg_control	ex_btc8822b1ant_dbg_control
#define ex_halbtc8822b1ant_power_on_setting	ex_btc8822b1ant_power_on_setting
#define ex_halbtc8822b1ant_pre_load_firmware	ex_btc8822b1ant_pre_load_firmware
#define ex_halbtc8822b1ant_init_hw_config	ex_btc8822b1ant_init_hw_config
#define ex_halbtc8822b1ant_init_coex_dm	ex_btc8822b1ant_init_coex_dm
#define ex_halbtc8822b1ant_display_coex_info	ex_btc8822b1ant_display_coex_info
#define ex_halbtc8822b1ant_ips_notify	ex_btc8822b1ant_ips_notify
#define ex_halbtc8822b1ant_lps_notify	ex_btc8822b1ant_lps_notify
#define ex_halbtc8822b1ant_scan_notify	ex_btc8822b1ant_scan_notify
#define ex_halbtc8822b1ant_scan_notify_without_bt	ex_btc8822b1ant_scan_notify_without_bt
#define ex_halbtc8822b1ant_switchband_notify	ex_btc8822b1ant_switchband_notify
#define ex_halbtc8822b1ant_scan_notify	ex_btc8822b1ant_scan_notify
#define ex_halbtc8822b1ant_switchband_notify_without_bt	ex_btc8822b1ant_switchband_notify_without_bt
#define ex_halbtc8822b1ant_scan_notify_without_bt	ex_btc8822b1ant_scan_notify_without_bt
#define ex_halbtc8822b1ant_connect_notify	ex_btc8822b1ant_connect_notify
#define ex_halbtc8822b1ant_media_status_notify	ex_btc8822b1ant_media_status_notify
#define ex_halbtc8822b1ant_specific_packet_notify	ex_btc8822b1ant_specific_packet_notify
#define ex_halbtc8822b1ant_bt_info_notify	ex_btc8822b1ant_bt_info_notify
#define ex_halbtc8822b1ant_rf_status_notify	ex_btc8822b1ant_rf_status_notify
#define ex_halbtc8822b1ant_halt_notify	ex_btc8822b1ant_halt_notify
#define ex_halbtc8822b1ant_media_status_notify	ex_btc8822b1ant_media_status_notify
#define ex_halbtc8822b1ant_pnp_notify	ex_btc8822b1ant_pnp_notify
#define ex_halbtc8822b1ant_coex_dm_reset	ex_btc8822b1ant_coex_dm_reset
#define ex_halbtc8822b1ant_periodical	ex_btc8822b1ant_periodical
#define ex_halbtc8822b1ant_antenna_detection	ex_btc8822b1ant_antenna_detection
#define ex_halbtc8822b1ant_antenna_isolation	ex_btc8822b1ant_antenna_isolation
#define ex_halbtc8822b1ant_psd_scan	ex_btc8822b1ant_psd_scan
#define ex_halbtc8822b1ant_display_ant_detection	ex_btc8822b1ant_display_ant_detection
#define ex_halbtc8822b1ant_dbg_control	ex_btc8822b1ant_dbg_control
#define ex_halbtc8822b1ant_switch_band_without_bt	ex_btc8822b1ant_switch_band_without_bt
#define ex_halbtc8822b1ant_scan_notify_without_bt	ex_btc8822b1ant_scan_notify_without_bt
#define ex_halbtc8822b1ant_switchband_notify_without_bt	ex_btc8822b1ant_switchband_notify_without_bt
#define ex_halbtc8822b1ant_scan_notify_without_bt	ex_btc8822b1ant_scan_notify_without_bt
#define ex_halbtc8822b1ant_coex_dm_reset	ex_btc8822b1ant_coex_dm_reset
#define ex_halbtc8822b1ant_antenna_detection	ex_btc8822b1ant_antenna_detection
#define ex_halbtc8822b1ant_antenna_isolation	ex_btc8822b1ant_antenna_isolation
#define ex_halbtc8822b1ant_psd_scan	ex_btc8822b1ant_psd_scan
#define ex_halbtc8822b1ant_display_ant_detection	ex_btc8822b1ant_display_ant_detection
#define ex_halbtc8822b1ant_dbg_control	ex_btc8822b1ant_dbg_control
#define ex_halbtc8822b2ant_power_on_setting	ex_btc8822b2ant_power_on_setting
#define ex_halbtc8822b2ant_pre_load_firmware	ex_btc8822b2ant_pre_load_firmware
#define ex_halbtc8822b2ant_init_hw_config	ex_btc8822b2ant_init_hw_config
#define ex_halbtc8822b2ant_init_coex_dm	ex_btc8822b2ant_init_coex_dm
#define ex_halbtc8822b2ant_display_coex_info	ex_btc8822b2ant_display_coex_info
#define ex_halbtc8822b2ant_ips_notify	ex_btc8822b2ant_ips_notify
#define ex_halbtc8822b2ant_lps_notify	ex_btc8822b2ant_lps_notify
#define ex_halbtc8822b2ant_scan_notify	ex_btc8822b2ant_scan_notify
#define ex_halbtc8822b2ant_switchband_notify	ex_btc8822b2ant_switchband_notify
#define ex_halbtc8822b2ant_scan_notify	ex_btc8822b2ant_scan_notify
#define ex_halbtc8822b2ant_connect_notify	ex_btc8822b2ant_connect_notify
#define ex_halbtc8822b2ant_media_status_notify	ex_btc8822b2ant_media_status_notify
#define ex_halbtc8822b2ant_specific_packet_notify	ex_btc8822b2ant_specific_packet_notify
#define ex_halbtc8822b2ant_bt_info_notify	ex_btc8822b2ant_bt_info_notify
#define ex_halbtc8822b2ant_rf_status_notify	ex_btc8822b2ant_rf_status_notify
#define ex_halbtc8822b2ant_halt_notify	ex_btc8822b2ant_halt_notify
#define ex_halbtc8822b2ant_media_status_notify	ex_btc8822b2ant_media_status_notify
#define ex_halbtc8822b2ant_pnp_notify	ex_btc8822b2ant_pnp_notify
#define ex_halbtc8822b2ant_periodical	ex_btc8822b2ant_periodical
#define ex_halbtc8822b2ant_antenna_detection	ex_btc8822b2ant_antenna_detection
#define ex_halbtc8822b2ant_display_ant_detection	ex_btc8822b2ant_display_ant_detection


/* Interface type */
#define RT_PCI_INTERFACE	1
#define RT_USB_INTERFACE	2
#define RT_SDIO_INTERFACE	3
#define DEV_BUS_TYPE		RT_PCI_INTERFACE

#include "halbtc8192e2ant.h"
#include "halbtc8723b1ant.h"
#include "halbtc8723b2ant.h"
#include "halbtc8821a2ant.h"
#include "halbtc8821a1ant.h"
#include "halbtc8822b1ant.h"
#include "halbtc8822b2ant.h"
#include "halbtc8822bwifionly.h"
#include "halbtc8723d1ant.h"
#include "halbtc8723d2ant.h"

#define GetDefaultAdapter(padapter)	padapter

#define BIT0	0x00000001
#define BIT1	0x00000002
#define BIT2	0x00000004
#define BIT3	0x00000008
#define BIT4	0x00000010
#define BIT5	0x00000020
#define BIT6	0x00000040
#define BIT7	0x00000080
#define BIT8	0x00000100
#define BIT9	0x00000200
#define BIT10	0x00000400
#define BIT11	0x00000800
#define BIT12	0x00001000
#define BIT13	0x00002000
#define BIT14	0x00004000
#define BIT15	0x00008000
#define BIT16	0x00010000
#define BIT17	0x00020000
#define BIT18	0x00040000
#define BIT19	0x00080000
#define BIT20	0x00100000
#define BIT21	0x00200000
#define BIT22	0x00400000
#define BIT23	0x00800000
#define BIT24	0x01000000
#define BIT25	0x02000000
#define BIT26	0x04000000
#define BIT27	0x08000000
#define BIT28	0x10000000
#define BIT29	0x20000000
#define BIT30	0x40000000
#define BIT31	0x80000000

#endif	/* __HALBT_PRECOMP_H__ */
