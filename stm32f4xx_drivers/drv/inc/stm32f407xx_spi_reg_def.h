/*
 * stm32f407xx_spi_reg_def.h
 *
 *  Created on: Jul 27, 2024
 *      Author: Admin
 */

#ifndef INC_STM32F407XX_SPI_REG_DEF_H_
#define INC_STM32F407XX_SPI_REG_DEF_H_

typedef union
{
	struct{
		uint32_t CPHA		: 1;
		uint32_t CPOL		: 1;
		uint32_t MSTR		: 1;
		uint32_t BR			: 2;
		uint32_t SPE		: 1;
		uint32_t LSB_FIRST	: 1;
		uint32_t SSI		: 1;
		uint32_t SSM		: 1;
		uint32_t RX_ONLY	: 1;
		uint32_t DFF		: 1;
		uint32_t CRC_NEXT	: 1;
		uint32_t BIDI_OE	: 1;
		uint32_t BIDI_MODE	: 1;
		uint32_t reserved0	: 15;
	} reg;
	uint32 raw;
} CR1_t;

typedef union
{
	struct{
		uint32_t RXDMAEN	: 1;
		uint32_t TXDMAEN	: 1;
		uint32_t SSOE		: 1;
		uint32_t reserved0	: 1;
		uint32_t FRF		: 1;
		uint32_t ERRIE		: 1;
		uint32_t RXNEIE		: 1;
		uint32_t TXEIE		: 1;
		uint32_t reserved1	: 24;
	} reg;
	uint32 raw;
} CR2_t;

typedef union
{
	struct{
		uint32_t RXNE		: 1;
		uint32_t TXE		: 1;
		uint32_t CHSIDE		: 1;
		uint32_t UDR		: 1;
		uint32_t CRCERR		: 1;
		uint32_t MODF		: 1;
		uint32_t OVR		: 1;
		uint32_t BSY		: 1;
		uint32_t FRE		: 1;
		uint32_t reserved	: 23;
	} reg;
	uint32 raw;
} SR_t;

typedef union
{
	struct{
		uint32_t DR			: 16;
		uint32_t reserved	: 16;
	} reg;
	uint32 raw;
} DR_t;

typedef union
{
	struct{
		uint32_t CRCPOLY	: 16;
		uint32_t reserved	: 16;
	} reg;
	uint32 raw;
} CRCPR_t;

typedef union
{
	struct{
		uint32_t RXCRC		: 16;
		uint32_t reserved	: 16;
	} reg;
	uint32 raw;
} RXCRCR_t;

typedef union
{
	struct{
		uint32_t TXCRC		: 16;
		uint32_t reserved	: 16;
	} reg;
	uint32 raw;
} TXCRCR_t;

typedef union
{
	struct{
		uint32_t CHLEN		: 1;
		uint32_t DATLEN		: 2;
		uint32_t CKPOL		: 1;
		uint32_t I2SSTD		: 2;
		uint32_t reserved0	: 1;
		uint32_t PCMSYNC	: 1;
		uint32_t I2SCFG		: 2;
		uint32_t I2SE		: 1;
		uint32_t I2SMOD		: 1;
		uint32_t reserved1	: 20;
	} reg;
	uint32 raw;
} I2SCFGR_t;

typedef union
{
	struct{
		uint32_t I2SDIV		: 8;
		uint32_t ODD		: 1;
		uint32_t MCKOE		: 1;
		uint32_t reserved	: 22;
	} reg;
	uint32 raw;
} I2SPR_t;

#endif /* INC_STM32F407XX_SPI_REG_DEF_H_ */
