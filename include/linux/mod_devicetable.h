/* SPDX-License-Identifier: GPL-2.0 */

#ifndef BACKPORT_MOD_DEVICETABLE_H
#define BACKPORT_MOD_DEVICETABLE_H

#include_next <linux/mod_devicetable.h>

/**
 * struct dfl_device_id -  dfl device identifier
 * @type: type of DFL FIU of the device. 0 for FME, 1 for PORT
 * @feature_id: 64 bits feature identifier local to its DFL FIU type.
 * @driver_data: Driver specific data
 */
struct dfl_device_id {
	unsigned int type;
	unsigned long long feature_id;
	kernel_ulong_t driver_data;
};

#endif
