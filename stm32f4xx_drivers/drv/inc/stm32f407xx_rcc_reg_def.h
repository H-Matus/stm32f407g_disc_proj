/*
 * stm32f407xx_rcc_reg_def.h
 *
 *  Created on: Jul 27, 2024
 *      Author: Admin
 */

#ifndef INC_STM32F407XX_RCC_REG_DEF_H_
#define INC_STM32F407XX_RCC_REG_DEF_H_

typedef union
{
	struct
	{
		uint32_t HSION		: 1;
		uint32_t HSIRDY		: 1;
		uint32_t reserved0	: 1;
		uint32_t HSITRIM0	: 1;
		uint32_t HSITRIM1	: 1;
		uint32_t HSITRIM2	: 1;
		uint32_t HSITRIM3	: 1;
		uint32_t HSITRIM4	: 1;
		uint32_t HSICAL0	: 1;
		uint32_t HSICAL1	: 1;
		uint32_t HSICAL2	: 1;
		uint32_t HSICAL3	: 1;
		uint32_t HSICAL4	: 1;
		uint32_t HSICAL5	: 1;
		uint32_t HSICAL6	: 1;
		uint32_t HSICAL7	: 1;
		uint32_t HSEON		: 1;
		uint32_t HSERDY		: 1;
		uint32_t HSEBYP		: 1;
		uint32_t CSSON		: 1;
		uint32_t reserved1	: 4;
		uint32_t PLLON		: 1;
		uint32_t PLLRDY		: 1;
		uint32_t PLLI2SON	: 1;
		uint32_t PLLI2SRDY	: 1;
		uint32_t PLLSAION	: 1;
		uint32_t PLLSAIRDY	: 1;
		uint32_t reserved2	: 2;
	} reg;
	uint32_t raw;
} CR_t;

typedef union
{
	struct
	{
		uint32_t PLLM0		: 1;
		uint32_t PLLM1		: 1;
		uint32_t PLLM2		: 1;
		uint32_t PLLM3		: 1;
		uint32_t PLLM4		: 1;
		uint32_t PLLM5		: 1;
		uint32_t PLLN0		: 1;
		uint32_t PLLN1		: 1;
		uint32_t PLLN2		: 1;
		uint32_t PLLN3		: 1;
		uint32_t PLLN4		: 1;
		uint32_t PLLN5		: 1;
		uint32_t PLLN6		: 1;
		uint32_t PLLN7		: 1;
		uint32_t PLLN8		: 1;
		uint32_t reserved0	: 1;
		uint32_t PLLP0		: 1;
		uint32_t PLLP1		: 1;
		uint32_t reserved1	: 4;
		uint32_t PLLSRC		: 1;
		uint32_t reserved2	: 1;
		uint32_t PLLQ0		: 1;
		uint32_t PLLQ1		: 1;
		uint32_t PLLQ2		: 1;
		uint32_t PLLQ3		: 1;
		uint32_t reserved3	: 4;
	} reg;
	uint32_t raw;
} PLLCFGR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} CFGR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} CIR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB1RSTR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB2RSTR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB3RSTR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} APB1RSTR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} APB2RSTR_t;

typedef union
{
	struct
	{
		uint32_t GPIOAEN		: 1;
		uint32_t GPIOBEN		: 1;
		uint32_t GPIOCEN		: 1;
		uint32_t GPIODEN		: 1;
		uint32_t GPIOEEN		: 1;
		uint32_t GPIOFEN		: 1;
		uint32_t GPIOGEN		: 1;
		uint32_t GPIOHEN		: 1;
		uint32_t GPIOIEN		: 1;
		uint32_t GPIOJEN		: 1;
		uint32_t GPIOKEN		: 1;
		uint32_t reserved0		: 1;
		uint32_t CRCEN			: 1;
		uint32_t reserved1		: 5;
		uint32_t BKPSRAMEN		: 1;
		uint32_t reserved2		: 1;
		uint32_t CCMDATARAMEN	: 1;
		uint32_t DMA1EN			: 1;
		uint32_t DMA2EN			: 1;
		uint32_t DMA2DEN		: 1;
		uint32_t reserved3		: 1;
		uint32_t ETHMACEN		: 1;
		uint32_t ETHMACTXEN		: 1;
		uint32_t ETHMACRXEN		: 1;
		uint32_t ETHMACPTPEN	: 1;
		uint32_t OTGHSEN		: 1;
		uint32_t OTGHSULPIEN	: 1;
		uint32_t reserved4		: 1;
	} reg;
	uint32_t raw;
} AHB1ENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB2ENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB3ENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} APB1ENR_t;

typedef union
{
	struct
	{
		uint32_t TIM1EN		: 1;
		uint32_t TIM8EN		: 1;
		uint32_t reserved0	: 2;
		uint32_t USART1EN	: 1;
		uint32_t USART6EN	: 1;
		uint32_t reserved1	: 2;
		uint32_t ADC1EN		: 1;
		uint32_t ADC2EN		: 1;
		uint32_t ADC3EN		: 1;
		uint32_t SDIOEN		: 1;
		uint32_t SPI1EN		: 1;
		uint32_t SPI4EN		: 1;
		uint32_t SYSCFGEN	: 1;
		uint32_t reserved2	: 1;
		uint32_t TIM9EN		: 1;
		uint32_t TIM10EN	: 1;
		uint32_t TIM11EN	: 1;
		uint32_t reserved3	: 1;
		uint32_t SPI5EN		: 1;
		uint32_t SPI6EN		: 1;
		uint32_t SAI1EN		: 1;
		uint32_t reserved4	: 3;
		uint32_t LTDCEN		: 1;
		uint32_t reserved5	: 5;
	} reg;
	uint32_t raw;
} APB2ENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB1LPENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB2LPENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} AHB3LPENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} APB1LPENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} APB2LPENR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} BDCR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} CSR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} SSCGR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} PLLI2SCFGR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} PLLSAICFGR_t;

typedef union
{
	struct
	{

	} reg;
	uint32_t raw;
} DCKCFGR_t;

#endif /* INC_STM32F407XX_RCC_REG_DEF_H_ */
