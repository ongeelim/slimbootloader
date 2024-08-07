/** @file
Private Header file for Usb Host Controller PEIM

Copyright (c) 2014 - 2024, Intel Corporation. All rights reserved.<BR>

SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef _EFI_PEI_XHCI_REG_H_
#define _EFI_PEI_XHCI_REG_H_

//
// xHCI Extended Capability Codes
//
#define XHC_CAP_USB_LEGACY              0x01
#define XHC_CAP_USB_DEBUG               0x0A
#define XHC_CAP_USB_SUPPORTED_PROTOCOL  0x02

//
// Capability registers offset
//
#define XHC_CAPLENGTH_OFFSET            0x00    // Capability register length offset
#define XHC_HCIVERSION_OFFSET           0x02    // Interface Version Number 02-03h
#define XHC_HCSPARAMS1_OFFSET           0x04    // Structural Parameters 1
#define XHC_HCSPARAMS2_OFFSET           0x08    // Structural Parameters 2
#define XHC_HCSPARAMS3_OFFSET           0x0c    // Structural Parameters 3
#define XHC_HCCPARAMS_OFFSET            0x10    // Capability Parameters
#define XHC_DBOFF_OFFSET                0x14    // Doorbell Offset
#define XHC_RTSOFF_OFFSET               0x18    // Runtime Register Space Offset

//
// Operational registers offset
//
#define XHC_USBCMD_OFFSET               0x0000  // USB Command Register Offset
#define XHC_USBSTS_OFFSET               0x0004  // USB Status Register Offset
#define XHC_PAGESIZE_OFFSET             0x0008  // USB Page Size Register Offset
#define XHC_DNCTRL_OFFSET               0x0014  // Device Notification Control Register Offset
#define XHC_CRCR_OFFSET                 0x0018  // Command Ring Control Register Offset
#define XHC_DCBAAP_OFFSET               0x0030  // Device Context Base Address Array Pointer Register Offset
#define XHC_CONFIG_OFFSET               0x0038  // Configure Register Offset
#define XHC_PORTSC_OFFSET               0x0400  // Port Status and Control Register Offset

//
// Runtime registers offset
//
#define XHC_MFINDEX_OFFSET              0x00    // Microframe Index Register Offset
#define XHC_IMAN_OFFSET                 0x20    // Interrupter X Management Register Offset
#define XHC_IMOD_OFFSET                 0x24    // Interrupter X Moderation Register Offset
#define XHC_ERSTSZ_OFFSET               0x28    // Event Ring Segment Table Size Register Offset
#define XHC_ERSTBA_OFFSET               0x30    // Event Ring Segment Table Base Address Register Offset
#define XHC_ERDP_OFFSET                 0x38    // Event Ring Dequeue Pointer Register Offset

//
// Register Bit Definition
//
#define XHC_USBCMD_RUN                  BIT0    // Run/Stop
#define XHC_USBCMD_RESET                BIT1    // Host Controller Reset
#define XHC_USBCMD_INTE                 BIT2    // Interrupter Enable
#define XHC_USBCMD_HSEE                 BIT3    // Host System Error Enable

#define XHC_USBSTS_HALT                 BIT0    // Host Controller Halted
#define XHC_USBSTS_HSE                  BIT2    // Host System Error
#define XHC_USBSTS_EINT                 BIT3    // Event Interrupt
#define XHC_USBSTS_PCD                  BIT4    // Port Change Detect
#define XHC_USBSTS_SSS                  BIT8    // Save State Status
#define XHC_USBSTS_RSS                  BIT9    // Restore State Status
#define XHC_USBSTS_SRE                  BIT10   // Save/Restore Error
#define XHC_USBSTS_CNR                  BIT11   // Host Controller Not Ready
#define XHC_USBSTS_HCE                  BIT12   // Host Controller Error

#define XHC_PAGESIZE_MASK               0xFFFF  // Page Size

#define XHC_CRCR_RCS                    BIT0    // Ring Cycle State
#define XHC_CRCR_CS                     BIT1    // Command Stop
#define XHC_CRCR_CA                     BIT2    // Command Abort
#define XHC_CRCR_CRR                    BIT3    // Command Ring Running

#define XHC_CONFIG_MASK                 0xFF    // Max Device Slots Enabled

#define XHC_PORTSC_CCS                  BIT0    // Current Connect Status
#define XHC_PORTSC_PED                  BIT1    // Port Enabled/Disabled
#define XHC_PORTSC_OCA                  BIT3    // Over-current Active
#define XHC_PORTSC_RESET                BIT4    // Port Reset
#define XHC_PORTSC_PLS                  (BIT5|BIT6|BIT7|BIT8)     // Port Link State
#define XHC_PORTSC_PP                   BIT9    // Port Power
#define XHC_PORTSC_PS                   (BIT10|BIT11|BIT12|BIT13) // Port Speed
#define XHC_PORTSC_LWS                  BIT16   // Port Link State Write Strobe
#define XHC_PORTSC_CSC                  BIT17   // Connect Status Change
#define XHC_PORTSC_PEC                  BIT18   // Port Enabled/Disabled Change
#define XHC_PORTSC_WRC                  BIT19   // Warm Port Reset Change
#define XHC_PORTSC_OCC                  BIT20   // Over-Current Change
#define XHC_PORTSC_PRC                  BIT21   // Port Reset Change
#define XHC_PORTSC_PLC                  BIT22   // Port Link State Change
#define XHC_PORTSC_CEC                  BIT23   // Port Config Error Change
#define XHC_PORTSC_CAS                  BIT24   // Cold Attach Status

#define XHC_HUB_PORTSC_CCS              BIT0    // Hub's Current Connect Status
#define XHC_HUB_PORTSC_PED              BIT1    // Hub's Port Enabled/Disabled
#define XHC_HUB_PORTSC_OCA              BIT3    // Hub's Over-current Active
#define XHC_HUB_PORTSC_RESET            BIT4    // Hub's Port Reset
#define XHC_HUB_PORTSC_PP               BIT9    // Hub's Port Power
#define XHC_HUB_PORTSC_CSC              BIT16   // Hub's Connect Status Change
#define XHC_HUB_PORTSC_PEC              BIT17   // Hub's Port Enabled/Disabled Change
#define XHC_HUB_PORTSC_OCC              BIT19   // Hub's Over-Current Change
#define XHC_HUB_PORTSC_PRC              BIT20   // Hub's Port Reset Change
#define XHC_HUB_PORTSC_BHRC             BIT21   // Hub's Port Warm Reset Change

#define XHC_IMAN_IP                     BIT0    // Interrupt Pending
#define XHC_IMAN_IE                     BIT1    // Interrupt Enable

#define XHC_IMODI_MASK                  0x0000FFFF  // Interrupt Moderation Interval
#define XHC_IMODC_MASK                  0xFFFF0000  // Interrupt Moderation Counter

//
// xHCI Supported Protocol Capability
//
#define XHC_SUPPORTED_PROTOCOL_DW0_MAJOR_REVISION_USB2  0x02
#define XHC_SUPPORTED_PROTOCOL_DW0_MAJOR_REVISION_USB3  0x03
#define XHC_SUPPORTED_PROTOCOL_NAME_STRING_OFFSET       0x04
#define XHC_SUPPORTED_PROTOCOL_NAME_STRING_VALUE        0x20425355
#define XHC_SUPPORTED_PROTOCOL_DW2_OFFSET               0x08
#define XHC_SUPPORTED_PROTOCOL_PSI_OFFSET               0x10
#define XHC_SUPPORTED_PROTOCOL_USB2_HIGH_SPEED_PSIM     480
#define XHC_SUPPORTED_PROTOCOL_USB2_LOW_SPEED_PSIM      1500

#pragma pack (1)
typedef struct {
  UINT8                 MaxSlots;       // Number of Device Slots
  UINT16                MaxIntrs:11;    // Number of Interrupters
  UINT16                Rsvd:5;
  UINT8                 MaxPorts;       // Number of Ports
} HCSPARAMS1;

//
// Structural Parameters 1 Register Bitmap Definition
//
typedef union {
  UINT32                Dword;
  HCSPARAMS1            Data;
} XHC_HCSPARAMS1;

typedef struct {
  UINT32                Ist:4;          // Isochronous Scheduling Threshold
  UINT32                Erst:4;         // Event Ring Segment Table Max
  UINT32                Rsvd:13;
  UINT32                ScratchBufHi:5; // Max Scratchpad Buffers Hi
  UINT32                Spr:1;          // Scratchpad Restore
  UINT32                ScratchBufLo:5; // Max Scratchpad Buffers Lo
} HCSPARAMS2;

//
// Structural Parameters 2 Register Bitmap Definition
//
typedef union {
  UINT32                Dword;
  HCSPARAMS2            Data;
} XHC_HCSPARAMS2;

typedef struct {
  UINT16                Ac64:1;        // 64-bit Addressing Capability
  UINT16                Bnc:1;         // BW Negotiation Capability
  UINT16                Csz:1;         // Context Size
  UINT16                Ppc:1;         // Port Power Control
  UINT16                Pind:1;        // Port Indicators
  UINT16                Lhrc:1;        // Light HC Reset Capability
  UINT16                Ltc:1;         // Latency Tolerance Messaging Capability
  UINT16                Nss:1;         // No Secondary SID Support
  UINT16                Pae:1;         // Parse All Event Data
  UINT16                Rsvd:3;
  UINT16                MaxPsaSize:4;  // Maximum Primary Stream Array Size
  UINT16                ExtCapReg;     // xHCI Extended Capabilities Pointer
} HCCPARAMS;

//
// Capability Parameters Register Bitmap Definition
//
typedef union {
  UINT32                Dword;
  HCCPARAMS             Data;
} XHC_HCCPARAMS;

//
// xHCI Supported Protocol Cabability
//
typedef struct {
  UINT8    CapId;
  UINT8    NextExtCapReg;
  UINT8    RevMinor;
  UINT8    RevMajor;
} SUPPORTED_PROTOCOL_DW0;

typedef union {
  UINT32                    Dword;
  SUPPORTED_PROTOCOL_DW0    Data;
} XHC_SUPPORTED_PROTOCOL_DW0;

typedef struct {
  UINT32    NameString;
} XHC_SUPPORTED_PROTOCOL_DW1;

typedef struct {
  UINT8     CompPortOffset;
  UINT8     CompPortCount;
  UINT16    ProtocolDef : 12;
  UINT16    Psic        : 4;
} SUPPORTED_PROTOCOL_DW2;

typedef union {
  UINT32                    Dword;
  SUPPORTED_PROTOCOL_DW2    Data;
} XHC_SUPPORTED_PROTOCOL_DW2;

typedef struct {
  UINT16    Psiv  : 4;
  UINT16    Psie  : 2;
  UINT16    Plt   : 2;
  UINT16    Pfd   : 1;
  UINT16    RsvdP : 5;
  UINT16    Lp    : 2;
  UINT16    Psim;
} SUPPORTED_PROTOCOL_PROTOCOL_SPEED_ID;

typedef union {
  UINT32                                  Dword;
  SUPPORTED_PROTOCOL_PROTOCOL_SPEED_ID    Data;
} XHC_SUPPORTED_PROTOCOL_PROTOCOL_SPEED_ID;

#pragma pack ()

//
// XHCi Data and Ctrl Structures
//
#pragma pack(1)
typedef struct {
  UINT8                   Pi;
  UINT8                   SubClassCode;
  UINT8                   BaseCode;
} USB_CLASSC;

typedef struct {
  UINT8                     Length;
  UINT8                     DescType;
  UINT8                     NumPorts;
  UINT16                    HubCharacter;
  UINT8                     PwrOn2PwrGood;
  UINT8                     HubContrCurrent;
  UINT8                     Filler[16];
} EFI_USB_HUB_DESCRIPTOR;
#pragma pack()

//
//  Hub Class Feature Selector for Clear Port Feature Request
//  It's the extension of hub class feature selector of USB 2.0 in USB 3.0 Spec.
//  For more details, Please refer to USB 3.0 Spec Table 10-7.
//
typedef enum {
  Usb3PortBHPortReset          = 28,
  Usb3PortBHPortResetChange    = 29
} XHC_PORT_FEATURE;

//
// Structure to map the hardware port states to the
// UEFI's port states.
//
typedef struct {
  UINT32                  HwState;
  UINT16                  UefiState;
} USB_PORT_STATE_MAP;

//
// Structure to map the hardware port states to feature selector for clear port feature request.
//
typedef struct {
  UINT32                  HwState;
  UINT16                  Selector;
} USB_CLEAR_PORT_MAP;

/**
  Read XHCI Operation register.

  @param Xhc            The XHCI device.
  @param Offset         The operation register offset.

  @retval the register content read.

**/
UINT32
XhcPeiReadOpReg (
  IN  PEI_XHC_DEV       *Xhc,
  IN  UINT32            Offset
  );

/**
  Write the data to the XHCI operation register.

  @param Xhc            The XHCI device.
  @param Offset         The operation register offset.
  @param Data           The data to write.

**/
VOID
XhcPeiWriteOpReg (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Data
  );

/**
  Set one bit of the operational register while keeping other bits.

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the operational register.
  @param  Bit           The bit mask of the register to set.

**/
VOID
XhcPeiSetOpRegBit (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Bit
  );

/**
  Clear one bit of the operational register while keeping other bits.

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the operational register.
  @param  Bit           The bit mask of the register to clear.

**/
VOID
XhcPeiClearOpRegBit (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Bit
  );

/**
  Wait the operation register's bit as specified by Bit
  to be set (or clear).

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the operational register.
  @param  Bit           The bit of the register to wait for.
  @param  WaitToSet     Wait the bit to set or clear.
  @param  Timeout       The time to wait before abort (in millisecond, ms).

  @retval EFI_SUCCESS   The bit successfully changed by host controller.
  @retval EFI_TIMEOUT   The time out occurred.

**/
EFI_STATUS
XhcPeiWaitOpRegBit (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Bit,
  IN BOOLEAN            WaitToSet,
  IN UINT32             Timeout
  );


/**
  Write the data to the XHCI door bell register.

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the door bell register.
  @param  Data          The data to write.

**/
VOID
XhcPeiWriteDoorBellReg (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Data
  );

/**
  Read XHCI runtime register.

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the runtime register.

  @return The register content read

**/
UINT32
XhcPeiReadRuntimeReg (
  IN PEI_XHC_DEV        *Xhc,
  IN  UINT32            Offset
  );

/**
  Write the data to the XHCI runtime register.

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the runtime register.
  @param  Data          The data to write.

**/
VOID
XhcPeiWriteRuntimeReg (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Data
  );

/**
  Set one bit of the runtime register while keeping other bits.

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the runtime register.
  @param  Bit           The bit mask of the register to set.

**/
VOID
XhcPeiSetRuntimeRegBit (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Bit
  );

/**
  Clear one bit of the runtime register while keeping other bits.

  @param  Xhc           The XHCI device.
  @param  Offset        The offset of the runtime register.
  @param  Bit           The bit mask of the register to set.

**/
VOID
XhcPeiClearRuntimeRegBit (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Offset,
  IN UINT32             Bit
  );

/**
  Check whether Xhc is halted.

  @param  Xhc           The XHCI device.

  @retval TRUE          The controller is halted.
  @retval FALSE         The controller isn't halted.

**/
BOOLEAN
XhcPeiIsHalt (
  IN PEI_XHC_DEV        *Xhc
  );

/**
  Check whether system error occurred.

  @param  Xhc           The XHCI device.

  @retval TRUE          System error happened.
  @retval FALSE         No system error.

**/
BOOLEAN
XhcPeiIsSysError (
  IN PEI_XHC_DEV        *Xhc
  );

/**
  Reset the host controller.

  @param  Xhc           The XHCI device.
  @param  Timeout       Time to wait before abort (in millisecond, ms).

  @retval EFI_TIMEOUT   The transfer failed due to time out.
  @retval Others        Failed to reset the host.

**/
EFI_STATUS
XhcPeiResetHC (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Timeout
  );

/**
  Halt the host controller.

  @param  Xhc           The XHCI device.
  @param  Timeout       Time to wait before abort.

  @retval EFI_TIMEOUT   Failed to halt the controller before Timeout.
  @retval EFI_SUCCESS   The XHCI is halt.

**/
EFI_STATUS
XhcPeiHaltHC (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Timeout
  );

/**
  Set the XHCI to run.

  @param  Xhc           The XHCI device.
  @param  Timeout       Time to wait before abort.

  @retval EFI_SUCCESS   The XHCI is running.
  @retval Others        Failed to set the XHCI to run.

**/
EFI_STATUS
XhcPeiRunHC (
  IN PEI_XHC_DEV        *Xhc,
  IN UINT32             Timeout
  );

#endif
