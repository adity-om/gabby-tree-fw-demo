/*
 * @Author: Aditya Om
 * @Date: 2022-02-06 21:44:04 
 * @Last Modified by: Aditya Om
 * @Last Modified time: 2022-02-06 21:45:13
 * File Description: Sets the relays hardware and ESP8266 PINS for the remote actuation 
 */


#include "relay.h"
#include "debug.h"

//Relays Settings
String relay_1_name = "Relay 1";
String relay_2_name = "Relay 2";
String relay_3_name = "Relay 3";

bool relay_latch_enabled = 1;

bool relay_1_state = 0;
bool relay_2_state = 0;
bool relay_3_state = 0;

void relay_setup(){

    pinMode(RELAY_1_PIN, OUTPUT);
    pinMode(RELAY_2_PIN, OUTPUT);
    pinMode(RELAY_3_PIN, OUTPUT);

    //define initial states of the relay upon power up
    relay_set_state(RELAY_1, relay_1_state);
    relay_set_state(RELAY_2, relay_2_state);
    relay_set_state(RELAY_3, relay_3_state);

}

//sets the relay pins
void relay_set_state(uint8_t id, bool state){

    switch(id)
    {
        case RELAY_1:
            digitalWrite(RELAY_1_PIN, state);
            relay_1_state = state;
        break;

        case RELAY_2:
            digitalWrite(RELAY_2_PIN, state);
            relay_2_state = state;
        break;

        case RELAY_3:
            digitalWrite(RELAY_3_PIN, state);
            relay_3_state = state;
        break;

        default:
        break;
    }

}