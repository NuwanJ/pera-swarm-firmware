#pragma once

#include <Arduino.h>
#ifndef _ROBOT_NEOPIXEL_H
#define _ROBOT_NEOPIXEL_H

#include "features.h"   // Enable or Diasable services
#include "define.h"     // Configurations for version 4 PCB
#include "config.h"   // Prepare this file before use

void beginNeoPixel();

void pixelUpdateLED(uint8_t i, int r, int g, int b);
void neoPixelTest() ;

void pixelShowColor(int r, int g, int b);
void pixelColorWave(int r, int g, int b);
void colorWipe(uint32_t color, int wait) ;
void pixelOff();

// Functions written for testing the performance of the LEDs
void whiteOverRainbow(int whiteSpeed, int whiteLength) ;
void rainbowFade2White(int wait, int rainbowLoops, int whiteLoops);

#endif
