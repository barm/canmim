#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

// SPI PIN Map
#define MCP_SCK   7
#define MCP_MOSI 10
#define MCP_MISO  8
#define MCP_CS    9
#define MCP_INT   6

// CAN Controller PIN Map
#define CAN_TX    3
#define CAN_RX    2

// LED PIN Map
#define LED_PIN   4

// CAN ID for OIL Pressure
#define OIL_PRESSURE_CAN_ID 0x662

// Resistors value in kOhm for the voltage divider.
#define OIL_PRESSURE_R1 10
#define OIL_PRESSURE_R2 50

// Characteristics of the oil pressure sensor.
// Voltage in mV.
#define OIL_PRESSURE_VL 500
#define OIL_PRESSURE_VH 4500
#define OIL_PRESSURE_PMAX 150

#define CANMIM_PRINT_METRICS

#endif