cmake_minimum_required(VERSION 3.10)
project(armor_detector_demo)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(armor_detector src/main.cpp src/armor_detector.cpp)
target_link_libraries(armor_detector ${OpenCV_LIBS})
