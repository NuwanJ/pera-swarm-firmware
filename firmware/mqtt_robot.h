#pragma once

#include <Arduino.h>

#ifndef _ROBOT_MQTT_ROBOT_H
#define _ROBOT_MQTT_ROBOT_H

#include "features.h"   // Enable or Diasable services
#include "define.h"     // Configurations for version 4 PCB
#include "config.h"   // Prepare this file before use
#include "pattern.h"

void mqtt_comm_out(char* msg);
void mqtt_robot_live();
void mqtt_robot_msg(char* msg, int* value);


#endif
