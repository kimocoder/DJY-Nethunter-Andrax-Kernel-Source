/*
 * bdc_cmd.h - header for the BDC debug functions
 *
 * Copyright (C) 2014 Broadcom Corporation
 *
 * Author: Ashwini Pahuja
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 */
#ifndef __LINUX_BDC_CMD_H__
#define __LINUX_BDC_CMD_H__

/* Command operations */
int bdc_address_device(struct bdc *bdc, u32 add);
int bdc_config_ep(struct bdc *bdc, struct bdc_ep *ep);
int bdc_dconfig_ep(struct bdc *bdc, struct bdc_ep *ep);
int bdc_stop_ep(struct bdc *bdc, int epnum);
int bdc_ep_set_stall(struct bdc *bdc, int epnum);
int bdc_ep_clear_stall(struct bdc *bdc, int epnum);
int bdc_ep_bla(struct bdc *bdc, struct bdc_ep *ep, dma_addr_t dma_addr);
int bdc_function_wake(struct bdc *bdc, u8 intf);
int bdc_function_wake_fh(struct bdc *bdc, u8 intf);

#endif /* __LINUX_BDC_CMD_H__ */
