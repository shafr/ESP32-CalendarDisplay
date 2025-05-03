/*
 * Drawing function for the calendars top bar
 *
 * display  display class
 *
 */

#ifndef EVENTS_H
#define EVENTS_H

#include <GxEPD2_GFX.h>
#include <U8g2_for_Adafruit_GFX.h>
#include <time.h>
#include "structures.h"

long eventList(GxEPD2_GFX& display, U8G2_FOR_ADAFRUIT_GFX& u8g2Fonts, struct tm& timeinfo, Event_type* events);

#endif