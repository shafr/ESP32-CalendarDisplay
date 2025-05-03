/*
 * Drawing function for the calendars sidebar
 */

#include <GxEPD2_GFX.h>
#include <U8g2_for_Adafruit_GFX.h>
#include <time.h>
#include "structures.h"

void sideBar(GxEPD2_GFX& display, U8G2_FOR_ADAFRUIT_GFX& u8g2Fonts, struct tm& timeinfo, Weather_type* weather);
void miniCalendar(GxEPD2_GFX& display, U8G2_FOR_ADAFRUIT_GFX& u8g2Fonts, struct tm& timeinfo);