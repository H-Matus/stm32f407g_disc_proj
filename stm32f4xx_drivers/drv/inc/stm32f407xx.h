/*
 * stm32f407xx.h
 *
 *  Created on: Jul 19, 2024
 *      Author: Admin
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/* STD Includes */
#include <stdint.h>

/* Private Includes */
#include "stm32f407xx_spi_reg_def.h"

/* Base addresses of FLASH and SRAM memories */
#define FLASH_BASEADDR	0x08000000
#define SYS_BASEADDR	0x1FFF0000
#define SRAM_BASEADDR	0x20000000

/* Base addresses of AHBx and APBx Bus Peripherals */
#define APB1_BASEADDR	0x40000000
#define APB1_LEN		0x10000
#define APB2_BASEADDR	( APB1_BASEADDR + APB1_LEN )
#define APB2_LEN		0x10000
#define AHB1_BASEADDR	( APB2_BASEADDR + APB2_LEN )
#define AHB2_BASEADDR	0x50000000

/* Peripheral Specific Offsets */
#define GPIO_ADDR_OFFSET	0x400
#define RCC_ADDR_OFFSET		0x2800
#define SPI1_ADDR_OFFSET	0x3000

/* Peripheral base addresses: */
/* GPIO Peripheral Base addresses */
#define GPIOA_BASEADDR	AHB1_BASEADDR
#define GPIOB_BASEADDR	( GPIOA_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOC_BASEADDR	( GPIOB_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOD_BASEADDR	( GPIOC_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOE_BASEADDR	( GPIOD_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOF_BASEADDR	( GPIOE_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOG_BASEADDR	( GPIOF_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOH_BASEADDR	( GPIOG_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOI_BASEADDR	( GPIOH_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOJ_BASEADDR	( GPIOI_BASEADDR + GPIO_ADDR_OFFSET )
#define GPIOK_BASEADDR	( GPIOJ_BASEADDR + GPIO_ADDR_OFFSET )

/* SPI Peripheral Base addresses */
#define SPI1_BASEADDR	( APB2_BASEADDR + SPI1_ADDR_OFFSET )

/* TIM Peripheral Base addresses */
#define TIM1_BASEADDR	APB2_BASEADDR

/* RCC peripheral base addresses */
#define RCC_BASEADDR	( AHB1_BASEADDR + RCC_ADDR_OFFSET )

/* Peripheral Register Structure Definitions */
/* GPIO */
typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t AFRH;
} GPIO_PeriDef_t;

/* SPI */
typedef struct
{
	volatile CR1_t		CR1;
	volatile CR2_t		CR2;
	volatile SR_t		SR;
	volatile DR_t		DR;
	volatile CRCPR_t	CRCPR;
	volatile RXCRCR_t	RXCRCR;
	volatile TXCRCR_t	TXCRCR;
	volatile I2SCFGR_t	I2SCFGR;
	volatile I2SPR_t	I2SPR;
} SPI_PeriDef_t;

/* RCC */
typedef struct
{
	volatile CR_t			CR;
	volatile PLLCFGR_t		PLLCFGR;
	volatile CFGR_t			CFGR;
	volatile CIR_t			CIR;
	volatile AHB1RSTR_t		AHB1RSTR;
	volatile AHB2RSTR_t		AHB2RSTR;
	volatile AHB3RSTR_t		AHB3RSTR;
	uint32_t 				reserved0;
	volatile APB1RSTR_t		APB1RSTR;
	volatile APB2RSTR_t		APB2RSTR;
	uint32_t				reserved1[2];
	volatile AHB1ENR_t		AHB1ENR;
	volatile AHB2ENR_t		AHB2ENR;
	volatile AHB3ENR_t		AHB3ENR;
	uint32_t				reserved2;
	volatile APB1ENR_t		APB1ENR;
	volatile APB2ENR_t		APB2ENR;
	uint32_t				reserved3[2];
	volatile AHB1LPENR_t	AHB1LPENR;
	volatile AHB2LPENR_t	AHB2LPENR;
	volatile AHB3LPENR_t	AHB3LPENR;
	uint32_t				reserved4;
	volatile APB1LPENR_t	APB1LPENR;
	volatile APB2LPENR_t	APB2LPENR;
	uint32_t				reserved5[2];
	volatile BDCR_t			BDCR;
	volatile CSR_t			CSR;
	uint32_t				reserved6[2];
	volatile SSCGR_t		SSCGR;
	volatile PLLI2SCFGR_t	PLLI2SCFGR;
	volatile PLLSAICFGR_t	PLLSAICFGR;
	volatile DCKCFGR_t		DCKCFGR;
} RCC_PeriDef_t;


/* Peripheral definitions (using base address and typedef) */
/* GPIO */
#define GPIOA			( (GPIO_PeriDef_t *)GPIOA_BASEADDR )
#define GPIOB			( (GPIO_PeriDef_t *)GPIOB_BASEADDR )
#define GPIOC			( (GPIO_PeriDef_t *)GPIOC_BASEADDR )
#define GPIOD			( (GPIO_PeriDef_t *)GPIOD_BASEADDR )
#define GPIOE			( (GPIO_PeriDef_t *)GPIOE_BASEADDR )
#define GPIOF			( (GPIO_PeriDef_t *)GPIOF_BASEADDR )
#define GPIOG			( (GPIO_PeriDef_t *)GPIOG_BASEADDR )
#define GPIOH			( (GPIO_PeriDef_t *)GPIOH_BASEADDR )
#define GPIOI			( (GPIO_PeriDef_t *)GPIOI_BASEADDR )
#define GPIOJ			( (GPIO_PeriDef_t *)GPIOJ_BASEADDR )
#define GPIOK			( (GPIO_PeriDef_t *)GPIOK_BASEADDR )

/* SPI */
#define SPI1			( (SPI_PeriDef_t *)SPI1_BASEADDR )

/* RCC */
#define RCC				( (RCC_PeriDef_t *)RCC_BASEADDR )

/* Peripheral Clock Enable and Disable macros (RCC peripheral) */
#define SPI1_CLK_EN		( RCC-> )
#define SPI1_CLK_DIS	()


#endif /* INC_STM32F407XX_H_ */
