#
# Makefile for Broadcom BCM947XX boards
#
# Copyright (C) 2008, Broadcom Corporation
# All Rights Reserved.
# 
# THIS SOFTWARE IS OFFERED "AS IS", AND BROADCOM GRANTS NO WARRANTIES OF ANY
# KIND, EXPRESS OR IMPLIED, BY STATUTE, COMMUNICATION OR OTHERWISE. BROADCOM
# SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
# FOR A SPECIFIC PURPOSE OR NONINFRINGEMENT CONCERNING THIS SOFTWARE.
#
# $Id: Makefile,v 1.3 2008/05/02 22:49:54 Exp $
#
#

SHARED := ../../../../../../shared

ifeq ($(CONFIG_WAPI),y)
EXTRA_CFLAGS += -DBCMWAPI_WAI
endif

EXTRA_CFLAGS += -DLINUX_HYBRID_POSTPROCESSING_REMOVAL

bcm947xx-objs := setup.o prom.o time.o irq.o perfcntr.o

BCM947XX_OBJS-y := $(addprefix $(SHARED)/, hndmips.o hndchipc.o linux_gpio.o sflash.o)
BCM947XX_OBJS-y += $(addprefix $(SHARED)/nvram/, nvram.o)

BCM947XX_OBJS-$(CONFIG_PCI) += $(addprefix $(SHARED)/, hndpci.o) pcibios.o
BCM947XX_OBJS-$(CONFIG_GENERIC_GPIO) += gen_gpio.o

bcm947xx-objs += $(BCM947XX_OBJS-y)

clean-files := $(BCM947XX_OBJS-y) $(BCM947XX_OBJS-)

obj-y += bcm947xx.o
