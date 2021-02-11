#pragma once

#include <Arduino.h>

#include "features.h"   // Enable or Diasable services
#include "define.h"     // Configurations for version 4 PCB
#include "config.h"   // Prepare this file before use

#include "mqtt_logic.h"
#include "neopixel.h"
//#include "config_sample.h"   // Sample configurations

void setup();
void beginMemory();


void i2c_scan();
