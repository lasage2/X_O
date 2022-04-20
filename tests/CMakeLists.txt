# Note: CMake support is community-based. The maintainers do not use CMake
# internally.

cmake_minimum_required(VERSION 3.5)


set(BUILD_GMOCK OFF)
add_subdirectory(gtest)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(game-test main.cpp)
target_link_libraries( game-test gtest_main)
add_test(NAME game-test COMMAND ./game-test)
