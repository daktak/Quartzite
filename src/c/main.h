#pragma once
#include <pebble.h>
#define SETTINGS_KEY 1
// A structure containing our settings
typedef struct ClaySettings {
  GColor FrameColor;
  GColor FrameColor1;
  GColor FrameColor2;
  GColor SideColor1;
  GColor SideColor2;
  GColor Text1Color;
  GColor Text2Color;
  GColor Text3Color;
  GColor Text4Color;
  GColor Text5Color;
  GColor Text6Color;
  GColor Text7Color;
  GColor Text8Color;
  GColor Text9Color;
  GColor Text10Color;
  /////////////////
  GColor HourColor;
  GColor MinColor;
  GColor HourColorN;
  GColor MinColorN;
  ////////////////
  GColor FrameColorN;
  GColor FrameColor1N;
  GColor FrameColor2N;
  GColor SideColor1N;
  GColor SideColor2N;
  GColor Text1ColorN;
  GColor Text2ColorN;
  GColor Text3ColorN;
  GColor Text4ColorN;
  GColor Text5ColorN;
  GColor Text6ColorN;
  GColor Text7ColorN;
  GColor Text8ColorN;
  GColor Text9ColorN;
  GColor Text10ColorN;
  int WeatherUnit;
  char* WindUnit;
  int UpSlider;
  char* WeatherTemp;
  char* TempFore;
  char FontChoice[12];
  char moonstring[12];
  char sunsetstring[10];
  char sunrisestring[10];
  char sunsetstring12[10];
  char sunrisestring12[10];
  char tempstring[10];
  char condstring[10];
  char windstring[10];
  char windavestring[10];
  char iconnowstring[6];
  char iconforestring[6];
  char windiconnowstring[6];
  char windiconavestring[6];
  char templowstring[10];
  char temphistring[10];
  int Weathertimecapture;
  bool NightTheme;
  bool HealthOff;

} __attribute__((__packed__)) ClaySettings;
