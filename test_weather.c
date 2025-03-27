#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "weather.h"


/**
 * Tests that the welcome message function returns the expected string.
 * 
 * @return 0 if the test passes, 1 if it fails
**/
int test_getWelcomeMessage(void) {
    const char* expected = "Welcome to the Nimbus Weather CLI!";
    const char* actual = getWelcomeMessage();
    
    if (strcmp(expected, actual) != 0) {
        printf("❌ test_getWelcomeMessage FAILED: \nExpected: %s\nActual: %s", expected, actual);
        return 1;
    }

    printf("✅ Test PASSED: Welcome message matches expected value\n");
    return 0;
}

/**
 * Runs all tests and returns the number of failed tests.
 */
int runAllTests(void) {
    int failedTests = 0;

    printf("\n=== Running test_getWelcomeMessage ===\n");
    failedTests += test_getWelcomeMessage();

    return failedTests;
}


int main(void) {
    printf("==============================\n");
    printf("  WEATHER FUNCTION TEST SUITE\n");
    printf("==============================\n");

    int failedTests = runAllTests();

    printf("\n==============================\n");

    if (failedTests == 0) {
        printf("✅ ALL TESTS PASSED SUCCESSFULLY!\n");
        return 0;
    }

    printf("❌ %d TEST(S) FAILED!\n", failedTests);
    return 1;
}