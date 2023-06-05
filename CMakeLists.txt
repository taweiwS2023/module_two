cmake_minimum_required(VERSION 3.10)
project(module_two)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(module_one/include)  # Add this line

add_library(module_two src/ModuleTwo.cpp)

add_subdirectory(googletest)
add_subdirectory(module_one)  # Add this line

enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(module_two_test test/ModuleTwoTest.cpp)
target_link_libraries(module_two_test gtest gtest_main)
target_link_libraries(module_two_test module_two)
target_link_libraries(module_two module_one)  # Add this line
