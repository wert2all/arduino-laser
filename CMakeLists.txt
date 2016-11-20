cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(PROJECT_NAME protection)
project(${PROJECT_NAME})
link_directories(${ARDUINO_SDK}/libraries)

set(${PROJECT_NAME}_BOARD uno)
set(${CMAKE_PROJECT_NAME}_SKETCH protection.ino)
set(${PROJECT_NAME}_PORT /dev/ttyUSB0)

generate_arduino_firmware(${CMAKE_PROJECT_NAME})
