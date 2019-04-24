################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main_form.c \
../src/panneau_led_form.c \
../src/pupitre_form.c 

OBJS += \
./src/main_form.o \
./src/panneau_led_form.o \
./src/pupitre_form.o 

C_DEPS += \
./src/main_form.d \
./src/panneau_led_form.d \
./src/pupitre_form.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"

