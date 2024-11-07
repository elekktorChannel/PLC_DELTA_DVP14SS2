
#ifndef INC_MODBUSSLAVE_H_
#define INC_MODBUSSLAVE_H_

#include "modbus_crc.h"
#include "stm32f4xx_hal.h"

#define SLAVE_ID 2

#define ILLEGAL_FUNCTION       0x01
#define ILLEGAL_DATA_ADDRESS   0x02
#define ILLEGAL_DATA_VALUE     0x03


static uint16_t Holding_Registers_Database[10]=
{
		3000,  3011,  3022,  3033,  3044,  3055,  3066,  3077,  3088,  3099,
};

static const uint16_t Input_Registers_Database[10]=
{
		4000,  4111,  4222,  4333,  4444,  4555,  4666,  4777,  4888,  4999,
};


uint8_t readHoldingRegs (void);
uint8_t readInputRegs (void);

#endif
