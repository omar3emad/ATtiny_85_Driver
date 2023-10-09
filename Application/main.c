/*
 * main.c
 *
 * Created: 10/5/2023 10:16:02 PM
 *  Author: Alandalos
 */ 

#include "main.h"
Std_ReturnType ret ;
pin_config_t led_1={
	.pin = GPIO_PIN0,
	.direction = GPIO_DIRECTION_INPUT,
	.logic =GPIO_LOW
};
int main(void)
{	DDRB=0x00;
	ret = gpio_pin_write_logic(&led_1,GPIO_HIGH);	
    while(1)
    {	
    }
}