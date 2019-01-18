/*
 * (C) Copyright 2013-2016
 * NVIDIA Corporation <www.nvidia.com>
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef _M3402_0000_H
#define _M3402_0000_H

#include <linux/sizes.h>

#include "tegra210-common.h"

/* Parse the board ID EEPROM and update DT */
#define CONFIG_NV_BOARD_ID_EEPROM
#define CONFIG_OF_ADD_CHOSEN_MAC_ADDRS
#define CONFIG_OF_ADD_PLUGIN_MANAGER_IDS
#define EEPROM_I2C_BUS		3
#define EEPROM_I2C_ADDRESS	0x50

#define CONFIG_OF_ADD_CAM_BOARD_ID
#define CAM_EEPROM_I2C_BUS	5
#define CAM_EEPROM_I2C_ADDR	0x54

/* High-level configuration options */
#define CONFIG_TEGRA_BOARD_STRING	"NVIDIA M3402-0000"

/* Board-specific serial config */
#define CONFIG_TEGRA_ENABLE_UARTB

/* I2C */
#define CONFIG_SYS_I2C_TEGRA
#define CONFIG_SYS_VI_I2C_TEGRA

/* SATA/AHCI */
#define CONFIG_AHCI
#define CONFIG_LIBATA
#define CONFIG_SCSI_AHCI
#define CONFIG_SCSI_AHCI_PLAT
#define CONFIG_SYS_SCSI_MAX_SCSI_ID     1
#define CONFIG_SYS_SCSI_MAX_LUN         1
#define CONFIG_SYS_SCSI_MAX_DEVICE      (CONFIG_SYS_SCSI_MAX_SCSI_ID * \
					CONFIG_SYS_SCSI_MAX_LUN)
#define CONFIG_SCSI

/* Environment in 'nowhere' at this time - save it to SATA later? */
#define CONFIG_ENV_IS_NOWHERE

/* SPI */
#define CONFIG_SF_DEFAULT_MODE		SPI_MODE_0
#define CONFIG_SF_DEFAULT_SPEED		24000000
#define CONFIG_SPI_FLASH_SIZE		(4 << 20)

/* USB2.0 Host support */
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_TEGRA
#define CONFIG_USB_STORAGE

/* USB networking support */
#define CONFIG_USB_HOST_ETHER
#define CONFIG_USB_ETHER_ASIX

/* PCI host support */
#define CONFIG_PCI
#define CONFIG_PCI_PNP
#define CONFIG_CMD_PCI

/* General networking support */

#include "tegra-common-usb-gadget.h"
#include "tegra-common-post.h"

/* Crystal is 38.4MHz. clk_m runs at half that rate */
#define COUNTER_FREQUENCY	19200000

#endif /* _M3402_0000_H */
