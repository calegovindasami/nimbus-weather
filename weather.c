#include <stdio.h>
#include "weather.h"


#ifndef TESTING
int main() {
    const char* welcomeMessage = getWelcomeMessage();

    printf("%s\n", welcomeMessage);
    return 0;
}
#endif


const char* getWelcomeMessage(void) {
    return "Welcome to the Nimbus Weather CLI!";
}


