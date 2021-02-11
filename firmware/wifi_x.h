#pragma once

#include <Arduino.h>
#include "features.h"   // Enable or Diasable services
#include "define.h"     // Configurations for version 4 PCB
#include "config.h"   // Prepare this file before use


#ifdef ENABLE_WIFI_CLIENT

#include <WiFi.h>
#include <HTTPClient.h>

#endif


const char* ssid = WIFI_SSID;
const char* password = WIFI_PASS;

void beginWiFi();
