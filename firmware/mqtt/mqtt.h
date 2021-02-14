#pragma once

#include <Arduino.h>

typedef struct Color{
    uint8_t R,G,B,C;
} color_t;




#ifdef ENABLE_MQTT
#include <WiFi.h>
#include <WiFiMulti.h>
#include <PubSubClient.h>

#include "config/global_variables.h"
#include "features.h"
#include "def_mqtt.h"

#define MQTT_WAIT_TIMEOUT 10000

extern WiFiClient espClient;
extern long lastMsg;
extern PubSubClient client;

extern uint8_t dist_lock;
extern uint16_t dist_virt;

extern uint8_t color_lock;
extern struct Color color_virt;

// Helps to build strings
extern char tempString1[255];
extern char tempString2[255];

#endif
// --------------------------------------------------------------

void beginMQTT();

void mqtt_wait(uint8_t *lock);
void enter_critical();
void exit_critical();

void subscribeDefault();

void mqtt_subscribe(char* str);
int mqtt_publish(char* str1, char* str2, boolean retained);
void mqtt_onMessageArrived(char* topic, byte* message, unsigned int length);

void mqtt_handle();
void reconnect() ;

void mqtt_robot_live();
void mqtt_robot_msg(char* msg, int* value);

int distance_read();
void color_read(color_t* color);

void mqtt_comm_out(char* msg);