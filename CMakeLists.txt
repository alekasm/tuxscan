cmake_minimum_required(VERSION 3.1.0)
project(tuxscan)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(tuxscan main.cpp)
target_link_libraries(tuxscan Qt5::Widgets)
