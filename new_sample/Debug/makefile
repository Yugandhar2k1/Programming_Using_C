################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
Hello.hex \

SECONDARY_SIZE += \
Hello.siz \


# All Target
all: Hello.elf secondary-outputs

# Tool invocations
Hello.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM Cross C Linker'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -Xlinker --gc-sections -Wl,-Map,"Hello.map" -o "Hello.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Hello.hex: Hello.elf
	@echo 'Invoking: GNU ARM Cross Create Flash Image'
	arm-none-eabi-objcopy -O ihex "Hello.elf"  "Hello.hex"
	@echo 'Finished building: $@'
	@echo ' '

Hello.siz: Hello.elf
	@echo 'Invoking: GNU ARM Cross Print Size'
	arm-none-eabi-size --format=berkeley "Hello.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS) Hello.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
