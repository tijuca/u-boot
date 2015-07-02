/*
 * (C) Copyright 2012,2015 Stephen Warren
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_SKIP_LOWLEVEL_INIT
#define CONFIG_BCM2836

#include "rpi-common.h"

#undef ENV_MEM_LAYOUT_SETTINGS
#define ENV_MEM_LAYOUT_SETTINGS \
	"scriptaddr=0x02000000\0" \
	"pxefile_addr_r=0x00100000\0" \
	"kernel_addr_r=0x01000000\0" \
	"fdt_addr_r=0x00000100\0" \
	"ramdisk_addr_r=0x02100000\0" \

#undef BOOT_TARGET_DEVICES
#define BOOT_TARGET_DEVICES(func) \
	func(MMC, mmc, 0) \
	func(USB, usb, 0) \
	func(DHCP, dhcp, na)

#endif
