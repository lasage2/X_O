cmake_minimum_required(VERSION 3.5)

project(x_o LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(x_o
    main.cpp
    game.h
    field.h
    field_button.h
    game.cpp
    field.cpp
    field_button.cpp)
target_link_libraries(x_o Qt5::Core Qt5::Widgets)

add_subdirectory(tests)
