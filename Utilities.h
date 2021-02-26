#ifndef Utilities_h
#define Utilities_h

#include <Arduino.h>

boolean checkColorValue(int value);
boolean checkColorValues(int red, int green, int blue);
boolean checkDifferentNumbers(int numbers[]);
boolean checkNumberPositive(int input);
boolean checkPinNumber(int pinNumber);
boolean checkPinNumbers(int red_pin, int green_pin, int blue_pin);
void printMessage(String message, boolean newLine=true);

#endif