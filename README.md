# nimbus-weather

# Nimbus Weather CLI

A command-line interface application for tracking weather information across multiple cities, built in C.

## 🌦️ Project Overview

Nimbus Weather is a learning project aimed at developing proficiency in C programming fundamentals. This CLI application allows users to manage a personal database of cities and their associated weather data through a simple text-based interface.

## 🎯 Learning Objectives

This project serves as a practical introduction to several key C programming concepts:

- Working with structs and arrays
- Dynamic memory allocation and management
- File I/O operations
- String manipulation
- User input handling and validation
- Command-line interface design

## ✨ Features

Nimbus Weather CLI provides the following functionality:

- **City Management**: Add, view, search, update, and delete cities from your database
- **Weather Data**: Store temperature, humidity, and condition information for each city
- **Data Persistence**: Save your weather database to a file and load it when needed
- **User-Friendly Interface**: Navigate the application through a simple menu system
- **Error Handling**: Robust validation to prevent crashes and data corruption

## 🚀 Development Journey

This project is being developed as a learning journey to understand C programming concepts. The implementation follows a step-by-step approach:

1. **Setup**: Creating the basic program structure and development environment
2. **Data Modeling**: Defining structures to represent weather information
3. **Core Functionality**: Implementing data management operations
4. **File Operations**: Adding persistence through file I/O
5. **Refinement**: Improving validation, error handling, and user experience

## 🛠️ Technical Implementation

The project consists of the following core components:

- **weather.c**: Main program file containing implementation code
- **weather.h**: Header file with struct definitions and function prototypes
- **weather.dat**: Data file for storing weather information

The application uses dynamic memory allocation to manage an array of weather records, freeing the user from needing to know the maximum number of cities in advance.

## 🚦 Getting Started

### Prerequisites
- GCC compiler
- Basic knowledge of terminal/command prompt usage

### Installation
1. Clone the repository
2. Navigate to the project directory
3. Compile with: `gcc -o nimbus weather.c`
4. Run with: `./nimbus` (or `nimbus.exe` on Windows)

This project was created as a learning exercise to gain practical experience with C programming concepts.
