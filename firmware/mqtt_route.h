#pragma once

#include <Arduino.h>
#include "mqtt_logic.h"
#include "mqtt_robot.h"

#include "pattern.h"
#include "features.h"   // Enable or Diasable services
#include "define.h"     // Configurations for version 4 PCB
#include "config.h"   // Prepare this file before use
#include "neopixel.h"

// This will define all the MQTT route actions

void mqtt_onMessageArrived(char* topic, byte* message, unsigned int length);
