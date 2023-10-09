################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../MCAL_layer \
../ECU_layer \
../MCAL_layer/GPIO \
../MCAL_layer/SERVICE


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../main.c \
../MCAL_layer/GPIO/hal_gpio.c \
../MCAL_layer/SERVICE/device_config.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
main.o \
MCAL_layer/GPIO/hal_gpio.o \
MCAL_layer/SERVICE/device_config.o

OBJS_AS_ARGS +=  \
main.o \
MCAL_layer/GPIO/hal_gpio.o \
MCAL_layer/SERVICE/device_config.o

C_DEPS +=  \
main.d \
MCAL_layer/GPIO/hal_gpio.d \
MCAL_layer/SERVICE/device_config.d

C_DEPS_AS_ARGS +=  \
main.d \
MCAL_layer/GPIO/hal_gpio.d \
MCAL_layer/SERVICE/device_config.d

OUTPUT_FILE_PATH +=Application.elf

OUTPUT_FILE_PATH_AS_ARGS +=Application.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.36
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.36\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATtiny85  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATtiny_DFP\1.10.348\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATtiny85__ -DNDEBUG  -I"../SERVICE" -I".." -I"../ECU_layer" -I"../MCAL_layer" -I"../MCAL_layer/GPIO"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL_layer/GPIO/hal_gpio.o: ../MCAL_layer/GPIO/hal_gpio.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.36
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.36\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATtiny85  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATtiny_DFP\1.10.348\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATtiny85__ -DNDEBUG  -I"../SERVICE" -I".." -I"../ECU_layer" -I"../MCAL_layer" -I"../MCAL_layer/GPIO"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL_layer/SERVICE/device_config.o: ../MCAL_layer/SERVICE/device_config.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.36
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.36\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATtiny85  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATtiny_DFP\1.10.348\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATtiny85__ -DNDEBUG  -I"../SERVICE" -I".." -I"../ECU_layer" -I"../MCAL_layer" -I"../MCAL_layer/GPIO"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking:  XC8 C Linker : 2.36
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.36\bin\xc8-cc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mcpu=ATtiny85  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATtiny_DFP\1.10.348\xc8"  -Wl,-Map="Application.map" -funsigned-char -funsigned-bitfields -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax --memorysummary,memoryfile.xml  
	@echo Finished building target: $@
	"C:\Program Files\Microchip\xc8\v2.36\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "Application.elf" "Application.hex"
	"C:\Program Files\Microchip\xc8\v2.36\bin\avr-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O ihex "Application.elf" "Application.eep" || exit 0
	"C:\Program Files\Microchip\xc8\v2.36\bin\avr-objdump.exe" -h -S "Application.elf" > "Application.lss"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "Application.elf" "Application.hex" "Application.eep" "Application.map" "Application.usersignatures" "Application.a"  "Application.lss"
	