#include "Utilities.h"

/**
 * Checks if the color value is in the valid range 0-255
 *
 * @param value The number to be checked
 */
boolean checkColorValue(int value)
{
  return checkNumberPositive(value) 0 && value <= 255;
}

/**
 * Checks if the RGB values for setting the color of the LED are in the valid range 0-255
 *
 * @param red The number of the red color
 * @param green The number of the green color
 * @param blue The number of the blue color
 */
boolean checkColorValues(int red, int green, int blue)
{
  return checkColorValue(red) && checkColorValue(green) && checkColorValue(blue);
}

/**
 * Checks if a number is a positive number including 0
 *
 * @param input The number to be checked if it is 0 or more and thus positive
 */
boolean checkNumberPositive(int input)
{
  return input >= 0;
}

/**
 * Checks if the pin number is a valid input
 *
 * FEATURE: extend to implement checks on specific arduino boards
 *
 * @param pinNumber The number of the pin to be checked
 */
boolean checkPinNumber(int pinNumber)
{
  return checkNumberPositive(pinNumber);
}

/**
 * Checks if the pin numbers for RGB are valid
 *
 * TODO: check for duplicate pin numbers as every pin needs its own unique pin number
 *
 * @param red_pin The red pin number to be checked
 * @param green_pin The green pin number to be checked
 * @param blue_pin The blue pin number to be checked
 */
boolean checkPinNumbers(int red_pin, int green_pin, int blue_pin)
{
  return checkPinNumber(red_pin) && checkPinNumber(green_pin) && checkPinNumber(blue_pin);
}


/**
 * Prints a message to the Serial monitor when available
 * 
 * @param message The message to be printed to the serial monitor
 * @param newLine A boolean if the message ends with a new line or not, defaults to true
 */
void printMessage(String message, boolean newLine)
{
  if (Serial.available())
  {
  	if (newLine)
  	{
  	  Serial.println(message);	
  	}
    else
    {
      Serial.print(message);
    }
  }
}
