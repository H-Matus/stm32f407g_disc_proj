################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drv/src/stm32f4xx_gpio_driver.c 

OBJS += \
./drv/src/stm32f4xx_gpio_driver.o 

C_DEPS += \
./drv/src/stm32f4xx_gpio_driver.d 


# Each subdirectory must supply rules for building sources it contributes
drv/src/%.o drv/src/%.su drv/src/%.cyclo: ../drv/src/%.c drv/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"C:/dev/projects/stm32f407_disc_proj/stm32f4xx_drivers/drv/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-drv-2f-src

clean-drv-2f-src:
	-$(RM) ./drv/src/stm32f4xx_gpio_driver.cyclo ./drv/src/stm32f4xx_gpio_driver.d ./drv/src/stm32f4xx_gpio_driver.o ./drv/src/stm32f4xx_gpio_driver.su

.PHONY: clean-drv-2f-src

