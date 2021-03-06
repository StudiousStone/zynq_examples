// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.2
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xmmult_accel_core.h"

extern XMmult_accel_core_Config XMmult_accel_core_ConfigTable[];

XMmult_accel_core_Config *XMmult_accel_core_LookupConfig(u16 DeviceId) {
	XMmult_accel_core_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XMMULT_ACCEL_CORE_NUM_INSTANCES; Index++) {
		if (XMmult_accel_core_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XMmult_accel_core_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XMmult_accel_core_Initialize(XMmult_accel_core *InstancePtr, u16 DeviceId) {
	XMmult_accel_core_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XMmult_accel_core_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XMmult_accel_core_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

