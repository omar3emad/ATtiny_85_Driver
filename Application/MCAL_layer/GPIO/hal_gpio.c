/*
 * hal_gpio.c
 *
 * Created: 10/5/2023 10:22:27 PM
 *  Author: Alandalos
 */ 

#include "hal_gpio.h"


#if GPIO_PORT_PIN_CONFIGRATION==CONFIG_ENABLE
/**
 * @brief initialize the direction of a specific pin @ref direction_t 
 * @param pin_config pointer to the configuration     @ref pin_config_t 
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType gpio_pin_direction_initialize(const pin_config_t *pin_config ){
	Std_ReturnType ret = E_OK;
	if((pin_config == NULL)||((pin_config->pin)>=PORT_PIN_MAX_NUMBER)){
		ret = E_NOT_OK;		
	}
	else{
		switch(pin_config->direction){
			case GPIO_DIRECTION_OUTPUT :
			SET_BIT(DDRB, pin_config->pin);
			break;
			
			case GPIO_DIRECTION_INPUT :
			CLEAR_BIT(DDRB, pin_config->pin);
			break;
			
			default :
			ret = E_NOT_OK ;
			break;
		}
	}
	return(ret);		
}

/**
 * @brief Get the direction of a specific pin @ref direction_t 
 * @param pin_config pointer to the configuration     @ref pin_config_t
 * @param direction_status pointer to the direction   @ref direction_t
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType  gpio_pin_get_direction_status(const pin_config_t *pin_config, direction_t *direction_status ){
	Std_ReturnType ret = E_OK;
	if((pin_config == NULL)||(direction_status == NULL)){
		ret = E_NOT_OK;
	}
	else{
		*direction_status = READ_BIT(DDRB, pin_config->pin);
	}
	return(ret);	
}

/**
 * @brief write 0/1 on a specific pin @ref logic_t
 * @param pin_config pointer to the configuration   @ref pin_config_t
 * @param logic pointer to the logic   @ref logic_t
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType  gpio_pin_write_logic(const pin_config_t *pin_config, logic_t logic ){
	Std_ReturnType ret = E_OK;
	if(pin_config == NULL){
		ret = E_NOT_OK;
	}
	else{
		switch(logic){
			case GPIO_HIGH :
			SET_BIT(PORTB, pin_config->pin);
			break;			
			case GPIO_LOW :
			CLEAR_BIT(PORTB, pin_config->pin);
			break;			
			default :
			ret = E_NOT_OK ;
			break;
		}
	}
	return(ret);
}

/**
 * @brief Read the logic on a specific pin @ref logic_t
 * @param pin_config pointer to the configuration   @ref pin_config_t
 * @param logic pointer to the logic   @ref logic_t
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType  gpio_pin_read_logic(const pin_config_t *pin_config, logic_t* logic ){
	Std_ReturnType ret = E_OK;
	if((pin_config == NULL)||(logic == NULL)){
		ret = E_NOT_OK;
	}
	else{
		*logic = READ_BIT(PINB, pin_config->pin);
	}
	return(ret);
}

/**
 * @brief Toggle the logic on a specific pin @ref logic_t
 * @param pin_config pointer to the configuration   @ref pin_config_t
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType  gpio_pin_toggle_logic(const pin_config_t *pin_config){
	Std_ReturnType ret = E_OK;
	if(pin_config == NULL){
		ret = E_NOT_OK;
	}
	else{
		TOGGLE_BIT(PORTB, pin_config->pin);
	}
	return(ret);
}

/**
 * @brief Initialize a specific pin to be output/input and write 0/1  @ref pin_config_t
 * @param pin_config pointer to the configuration   @ref pin_config_t
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType  gpio_pin_initialize(const pin_config_t *pin_config ){
	Std_ReturnType ret = E_OK;
	if(pin_config == NULL){
		ret = E_NOT_OK;
	}
	else{
		ret  = gpio_pin_direction_initialize(pin_config);
		ret |= gpio_pin_write_logic(pin_config,pin_config->logic); 
	}
	return(ret);
}

#endif
/*****************************************************/
#if GPIO_PORT_CONFIGRATION==CONFIG_ENABLE



/**
 * @brief initialize the direction of the port
 * @param direction value if=0xff all pins output
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType gpio_port_direction_initialize(uint8 direction){
	Std_ReturnType ret = E_OK;
	if(direction > 0xFF){
		ret = E_NOT_OK;
	}
	else{
		DDRB = direction ;
	}
	return(ret);
}

/**
 * @brief Get the direction of the port
 * @param direction value if=0xff all pins output
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType gpio_port_get_direction_status(uint8 *direction_status){
	Std_ReturnType ret = E_OK;
	if(direction_status == NULL){
		ret = E_NOT_OK;
	}
	else{
		*direction_status = DDRB ;
	}
	return(ret);
}

/**
 * @brief Read the logic on the port
 * @param logic the logic value written on the port   
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType gpio_port_write_logic(uint8 logic){
	Std_ReturnType ret = E_OK;
	if(logic > 0xFF){
		ret = E_NOT_OK;
	}
	else{
		PORTB = logic ;
	}
	return(ret);
}

/**
 * @brief Read the logic on the port
 * @param logic  pointer to the logic  
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType gpio_port_read_logic(uint8 *logic){
	Std_ReturnType ret = E_OK;
	if(logic == NULL){
		ret = E_NOT_OK;
	}
	else{
		*logic = PINB ;
	}
	return(ret);
}

/**
 * @brief Toggle the logic on the port
 * @return Status of the function
 *         (E_OK)    : the function done successfully
 *         (E_NOT_OK): the function done has issue to perform this action
 */
Std_ReturnType gpio_port_toggle_logic(void){
	Std_ReturnType ret = E_OK;	
		PORTB ^= (PORT_MASK);	
	return(ret);
}

#endif







