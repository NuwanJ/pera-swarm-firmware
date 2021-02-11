#pragma once

#include <Arduino.h>

#ifndef _ROBOT_MQTT_LOGIC_H
#define _ROBOT_MQTT_LOGIC_H

#include "features.h"   // Enable or Diasable services
#include "define.h"     // Configurations for version 4 PCB
#include "config.h"   // Prepare this file before use

void mqtt_wait(uint8_t *lock);
void enter_critical();
void exit_critical();
void beginMQTT();
void subscribeDefault();
void mqtt_subscribe(char* str);
int mqtt_publish(char* str1, char* str2, boolean retained);
void mqtt_handle();
void reconnect();


#endif
