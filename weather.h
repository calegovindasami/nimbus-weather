/**
 * @file weather.h
 * @brief Header file for the Nimbus Weather CLI application
 * 
 * This file contains the function declarations for the Nimbus Weather CLI
 * application. The functions provide weather-related information and utilities.
 * 
 * @author Cale Govindasami
 * @date 27/03/2025
 */

 /**
  * @brief Returns the welcome message for the application
  * 
  * This function returns a pointer to a static string containing
  * the welcome message for the Nimbus Weather CLI application.
  * 
  * @return A pointer to the welcome message string
  */
 const char* getWelcomeMessage(void);
 

/**
 * @brief Weather condition severity levels
 * 
 * Represents the severity/intensity of weather conditions from mild to extreme.
 */
typedef enum {
    MILD,      /**< Pleasant weather conditions with minimal impact */
    MODERATE,  /**< Noticeable weather conditions with minor inconveniences */
    SEVERE,    /**< Significant weather conditions that may disrupt normal activities */
    EXTREME    /**< Dangerous weather conditions that pose serious risks */
} Condition;

/**
 * @brief Types of weather phenomena
 * 
 * Categorizes different weather phenomena regardless of intensity.
 */
typedef enum {
    CLEAR,     /**< Clear skies with no significant cloud cover */
    CLOUDY,    /**< Sky covered with clouds with no precipitation */
    RAINY,     /**< Precipitation in the form of rain */
    SNOWY,     /**< Precipitation in the form of snow */
    WINDY,     /**< Strong air movement with no significant precipitation */
    FOGGY      /**< Reduced visibility due to water vapor near the ground */
} WeatherType;

/**
 * @brief Weather information structure
 * 
 * Contains comprehensive information about weather conditions for a specific location.
 */
typedef struct {
    char city[51];         /**< Name of the city (max 50 characters + null terminator) */
    float temperature;     /**< Current temperature in Celsius */
    int humidity;          /**< Current humidity level as percentage (0-100%) */
    Condition condition;   /**< Severity level of the current weather */
    WeatherType weatherType; /**< Type of weather phenomena currently occurring */
} Weather;