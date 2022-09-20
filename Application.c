/* 
 * File:   Application.c
 * Author: Kareem Taha Abdelfatah Mohammed
 * https://www.linkedin.com/in/kareem-taha-ba451621a/
 * Created on September 13, 2022, 9:10 PM
 */

#include "Application.h"

STD_ReturnType ret = E_OK;
uint8 sec = 50, min = 10, hour = 7;

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
        for(uint8 counter = 0; counter <= 50; counter++){
            gpio_port_write_logic(PORTD_INDEX, 0x01);
            gpio_port_write_logic(PORTC_INDEX, (uint8)(hour/10));
            _delay(3333);
            gpio_port_write_logic(PORTD_INDEX, 0x02);
            gpio_port_write_logic(PORTC_INDEX, (uint8)(hour%10));
            _delay(3333);
            gpio_port_write_logic(PORTD_INDEX, 0x04);
            gpio_port_write_logic(PORTC_INDEX, (uint8)(min/10));
            _delay(3333);
            gpio_port_write_logic(PORTD_INDEX, 0x08);
            gpio_port_write_logic(PORTC_INDEX, (uint8)(min%10));
            _delay(3333);
            gpio_port_write_logic(PORTD_INDEX, 0x10);
            gpio_port_write_logic(PORTC_INDEX, (uint8)(sec/10));
            _delay(33333);
            gpio_port_write_logic(PORTD_INDEX, 0x20);
            gpio_port_write_logic(PORTC_INDEX, (uint8)(sec%10));
            _delay(3333);
        }
        sec++;
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
    }
    return (EXIT_SUCCESS);
}

/* initialize any pin with direction & logic */
void Application_initialize(void){
    ret = gpio_port_direction_init(PORTC_INDEX, GPIO_OUTPUT_DIRECTION);
    ret = gpio_port_direction_init(PORTD_INDEX, GPIO_OUTPUT_DIRECTION);
}