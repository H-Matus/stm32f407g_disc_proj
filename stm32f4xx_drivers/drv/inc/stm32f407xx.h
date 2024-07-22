/*
 * stm32f407xx.h
 *
 *  Created on: Jul 19, 2024
 *      Author: Admin
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/* Includes */
#include <stdint.h>

/* Base addresses of FLASH and SRAM memories */
#define FLASH_BASEADDR	0x08000000
#define SYS_BASEADDR	0x1FFF0000
#define SRAM_BASEADDR	0x20000000

/* Base addresses of AHBx and APBx Bus Peripherals */
#define APB1_BASEADDR	FLASH_BASEADDR
#define APB1_LEN		0x10000
#define APB2_BASEADDR	( APB1_BASEADDR + APB1_LEN )
#define APB2_LEN		0x10000
#define AHB1_BASEADDR	( APB2_BASEADDR + APB2_LEN )
#define AHB2_BASEADDR	0x50000000

/* Peripheral Specific Offsets */
#define GPIO_ADDR_OFFSET	0x400
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

/* Peripheral Register Structure Definitions */
/* GPIO */
typedef struct
{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFRL;
	uint32_t AFRH;
}GPIO_RegDef_t;

/* SPI */
typedef struct
{

}SPI_RegDef_t;

/* Peripheral Clock Enable and Disable macros (RCC peripheral) */


/* Peripheral definitions (using base address and typedef) */
/* GPIO */
#define GPIOA			( (GPIO_RegDef_t *)GPIOA_BASEADDR )
#define GPIOB			( (GPIO_RegDef_t *)GPIOB_BASEADDR )
#define GPIOC			( (GPIO_RegDef_t *)GPIOC_BASEADDR )
#define GPIOD			( (GPIO_RegDef_t *)GPIOD_BASEADDR )
#define GPIOE			( (GPIO_RegDef_t *)GPIOE_BASEADDR )
#define GPIOF			( (GPIO_RegDef_t *)GPIOF_BASEADDR )
#define GPIOG			( (GPIO_RegDef_t *)GPIOG_BASEADDR )
#define GPIOH			( (GPIO_RegDef_t *)GPIOH_BASEADDR )
#define GPIOI			( (GPIO_RegDef_t *)GPIOI_BASEADDR )
#define GPIOJ			( (GPIO_RegDef_t *)GPIOJ_BASEADDR )
#define GPIOK			( (GPIO_RegDef_t *)GPIOK_BASEADDR )

/* SPI */
#define SPI1			((SPI_RegDef_t *)SPI1_BASEADDR )


#endif /* INC_STM32F407XX_H_ */
