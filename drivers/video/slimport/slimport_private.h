/*
 * Copyright(c) 2013, LG Electronics Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SLIMPORT_PRIVATE_H
#define __SLIMPORT_PRIVATE_H

#define SSC_EN
/* #define HDCP_EN */

#if 0
#define SSC_1
#define EYE_TEST
#define EDID_DEBUG_PRINT
#endif

#define AUX_ERR  1
#define AUX_OK   0

#define LOG_TAG "[anx7808]"

extern unchar sp_tx_hw_lt_done;
extern bool sp_tx_hw_lt_enable;
extern unchar sp_tx_link_config_done ;
extern enum SP_TX_System_State sp_tx_system_state;
extern unchar sp_tx_rx_anx7730;
extern unchar sp_tx_pd_mode;
extern unchar sp_tx_rx_mydp;
extern unchar bedid_break;

int sp_read_reg(uint8_t slave_addr, uint8_t offset, uint8_t *buf);
int sp_write_reg(uint8_t slave_addr, uint8_t offset, uint8_t value);
void sp_tx_hardware_poweron(void);
void sp_tx_hardware_powerdown(void);

#endif