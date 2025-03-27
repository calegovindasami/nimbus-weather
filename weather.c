#include <stdio.h>
#include "weather.h"


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
 * @return const char* A pointer to the first character of the string.
 *         All characters end with a \0 which indicates its the end of the string.
 *         'Hello' -> ["H", "e", "l", "l", "\0"]
 */
const char* getWelcomeMessage(void) {
    return "Welcome to the Nimbus Weather CLI!";
}


