/**
 * @file test_weather.c
 * @brief Test suite for Nimbus Weather CLI functionality
 * 
 * This file contains unit tests for the functions implemented in weather.c.
 * It verifies that the functions behave as expected under various conditions.
 * 
 * @author Cale Govindasami
 * @date 27/03/2025
 */

 #include <stdio.h>
 #include <assert.h>
 #include <string.h>
 
 #include "weather.h"
 
 /**
  * @brief Tests the getWelcomeMessage function
  * 
  * This test verifies that the getWelcomeMessage function returns
  * the expected welcome message string. It compares the actual
  * result with the expected string.
  * 
  * @return 0 if the test passes, 1 if it fails
  */
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
  * @brief Runs all test functions defined in this file
  * 
  * This function executes all test functions and counts the number
  * of tests that failed. It returns the total number of failed tests.
  * 
  * @return Number of failed tests (0 if all tests passed)
  */
 int runAllTests(void) {
     int failedTests = 0;
 
     printf("\n=== Running test_getWelcomeMessage ===\n");
     failedTests += test_getWelcomeMessage();
 
     return failedTests;
 }
 
 /**
  * @brief Main entry point for the test suite
  * 
  * This function runs all tests and reports the results. It returns
  * 0 if all tests pass, and 1 if any test fails, making it suitable
  * for use in automated testing environments.
  * 
  * @return 0 if all tests pass, 1 if any test fails
  */
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