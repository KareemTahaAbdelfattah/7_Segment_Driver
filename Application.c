/* 
 * File:   Application.c
 * Author: Kareem Taha Abdelfatah Mohammed
 * https://www.linkedin.com/in/kareem-taha-ba451621a/
 * Created on September 13, 2022, 9:10 PM
 */

#include "Application.h"

STD_ReturnType ret = E_OK;
uint8 sec = 25, min = 34, hour = 10;

segment_t segment_t1 = {
    .segment_pins[0].pin = GPIO_PIN0,
    .segment_pins[1].pin = GPIO_PIN1,
    .segment_pins[2].pin = GPIO_PIN2,
    .segment_pins[3].pin = GPIO_PIN3,
    .segment_pins[0].port = PORTC_INDEX,
    .segment_pins[1].port = PORTC_INDEX,
    .segment_pins[2].port = PORTC_INDEX,
    .segment_pins[3].port = PORTC_INDEX,
    .segment_pins[0].logic = GPIO_LOW,
    .segment_pins[1].logic = GPIO_LOW,
    .segment_pins[2].logic = GPIO_LOW,
    .segment_pins[3].logic = GPIO_LOW,
    .segment_pins[0].direction = GPIO_OUTPUT_DIRECTION,
    .segment_pins[1].direction = GPIO_OUTPUT_DIRECTION,
    .segment_pins[2].direction = GPIO_OUTPUT_DIRECTION,
    .segment_pins[3].direction = GPIO_OUTPUT_DIRECTION,
    .segment_type = SEGMENT_COM_ANODE,
};

int main() { 
    Application_initialize();
    while(1){
        
        
        
        /*gpio_port_write_logic(PORTD_INDEX, 0x3E);
        gpio_port_write_logic(PORTC_INDEX, (uint8)(sec/10));
        gpio_port_write_logic(PORTD_INDEX, 0x3D);
        gpio_port_write_logic(PORTC_INDEX, (uint8)(sec%10));
        _delay(3330);
        gpio_port_write_logic(PORTD_INDEX, 0x3B);
        gpio_port_write_logic(PORTC_INDEX, (uint8)(min/10));
        gpio_port_write_logic(PORTD_INDEX, 0x37);
        gpio_port_write_logic(PORTC_INDEX, (uint8)(min%10));
        _delay(3330);
        gpio_port_write_logic(PORTD_INDEX, 0x2F);
        gpio_port_write_logic(PORTC_INDEX, (uint8)(hour/10));
        gpio_port_write_logic(PORTD_INDEX, 0x1F);
        gpio_port_write_logic(PORTC_INDEX, (uint8)(hour%10));
        _delay(3330);
        if(sec == 60){
            sec = 0;
            min++;
        }
        if(min == 60){
            min = 0;
            hour++;
        }
        if(hour == 12){
            hour = 0;
            hour++;
        }
        sec++;*/
    }
    return (EXIT_SUCCESS);
}

/* initialize any pin with direction & logic */
void Application_initialize(void){
    /*ret = gpio_port_direction_init(PORTC_INDEX, GPIO_OUTPUT_DIRECTION);
    ret = gpio_port_direction_init(PORTD_INDEX, 0xC0);*/
    
    
}