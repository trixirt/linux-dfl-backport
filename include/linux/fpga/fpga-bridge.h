// SPDX-License-Identifier: GPL-2.0

#ifndef _BACKPORT_FPGA_BRIDGE_H_
#define _BACKPORT_FPGA_BRIDGE_H_

#include <linux/version.h>
#include_next <linux/fpga/fpga-bridge.h>

#if LINUX_VERSION_CODE < KERNEL_VERSION(4, 20, 0)

struct fpga_bridge
*devm_fpga_bridge_create(struct device *dev, const char *name,
			 const struct fpga_bridge_ops *br_ops, void *priv);

#endif /* < KERNEL_VERSION(4, 20, 0) */

#endif
