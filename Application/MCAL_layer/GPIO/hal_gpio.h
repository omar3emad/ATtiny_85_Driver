/*
 * hal_gpio.h
 *
 * Created: 10/5/2023 10:18:45 PM
 *  Author: Alandalos
 */ 


#ifndef HAL_GPIO_H_
#define HAL_GPIO_H_

/*  Section : Includes   */
#include <avr/io.h>
#include "SERVICE/mcal_std_types.h"
#include "SERVICE/std_libraries.h"
#include "SERVICE/device_config.h"
#include "hal_gpio_cfg.h"

/*  Section : Macro Declarations   */

#define PORT_PIN_MAX_NUMBER  6
#define BIT_MASK      (uint8)1
#define PORT_MASK     0xFF



/*  Section : Macro Functions Declarations   */

#define SET_BIT(REG, BIT_POSN)       (REG|=(BIT_MASK<<BIT_POSN))
#define CLEAR_BIT(REG, BIT_POSN)     (REG&=~(BIT_MASK<<BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)    (REG^=(BIT_MASK<<BIT_POSN))
#define READ_BIT(REG, BIT_POSN)      ((REG>>BIT_POSN) & BIT_MASK)

/*  Section : Data Type Declarations   */

typedef enum {
GPIO_LOW = 0 ,
GPIO_HIGH
}logic_t;

typedef enum {
GPIO_DIRECTION_OUTPUT = 0 ,
GPIO_DIRECTION_INPUT
}direction_t;

typedef enum {
GPIO_PIN0 = 0 ,
GPIO_PIN1 ,
GPIO_PIN2 ,
GPIO_PIN3 ,
GPIO_PIN4 ,
GPIO_PIN5 ,
GPIO_PIN6 ,
GPIO_PIN7
}pin_index_t;


typedef struct{

pin_index_t pin       : 3 ; /*@ref pin_index_t */
direction_t direction : 1 ; /*@ref direction_t */
logic_t logic         : 1 ; /*@ref logic_t */
uint8 reserved        : 3 ; /* reserved */
}pin_config_t;

/*  Section : Functions Declarations   */

Std_ReturnType  gpio_pin_direction_initialize(const pin_config_t *pin_config );
Std_ReturnType  gpio_pin_get_direction_status(const pin_config_t *pin_config, direction_t *direction_status );
Std_ReturnType  gpio_pin_write_logic(const pin_config_t *pin_config, logic_t logic );
Std_ReturnType  gpio_pin_read_logic(const pin_config_t *pin_config, logic_t* logic );
Std_ReturnType  gpio_pin_toggle_logic(const pin_config_t *pin_config);
Std_ReturnType  gpio_pin_initialize(const pin_config_t *pin_config );

Std_ReturnType gpio_port_direction_initialize(uint8 direction);
Std_ReturnType gpio_port_get_direction_status(uint8 *direction_status);
Std_ReturnType gpio_port_write_logic(uint8 logic);
Std_ReturnType gpio_port_read_logic(uint8 *logic);
Std_ReturnType gpio_port_toggle_logic(void);




#endif /* HAL_GPIO_H_ */