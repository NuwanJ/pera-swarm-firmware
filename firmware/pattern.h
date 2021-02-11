#pragma once

#include <Arduino.h>
#ifndef _ROBOT_PATTERN_H
#define _ROBOT_PATTERN_H

enum pattern{P_BEGIN, P_WAIT, P_RUN };
int patternState = P_BEGIN;

int currentHopId = -1;
boolean colorUpdated = false;

// Loop in the pattern
void pattern_loop();
void pattern_setup();

// functional part of the pattern
void pattern_execute(char* msg);
// instruct to start the pattern
void pattern_start();

// reset the pattern variables and state
void pattern_reset();

// stop the execution of the pattern
void pattern_stop();


#endif
