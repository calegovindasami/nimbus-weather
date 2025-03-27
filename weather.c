/**
 * @file weather.c
 * @brief Implementation of the Nimbus Weather CLI functionality
 * 
 * This file contains the implementation of functions declared in weather.h.
 * It provides core functionality for the Nimbus Weather CLI application.
 * 
 * @author Cale Govindasami
 * @date 27/03/2025
 */

 #include <stdio.h>
 #include "weather.h"
 
 /**
  * @brief Main entry point for the application
  * 
  * The main function displays the welcome message and serves as the 
  * entry point for the Nimbus Weather CLI application. It is conditionally
  * compiled and excluded when running tests.
  * 
  * @return 0 on successful execution
  */
 #ifndef TESTING
 int main() {
     const char* welcomeMessage = getWelcomeMessage();
 
     printf("%s\n", welcomeMessage);
     return 0;
 }
 #endif
 
 /**
  * @brief Returns the welcome message for the application
  * 
  * This function returns a pointer to a static string containing the
  * welcome message for the Nimbus Weather CLI application.
  * 
  * @return const char* A pointer to the first character of the string.
  *         All characters end with a null terminator ('\0') which indicates
  *         the end of the string.
  *         Example: 'Hello' is stored as ['H', 'e', 'l', 'l', 'o', '\0']
  */
 const char* getWelcomeMessage(void) {
     return "Welcome to the Nimbus Weather CLI!";
 }