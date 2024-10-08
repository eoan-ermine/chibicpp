cmake_minimum_required(VERSION 3.15)
project(chibicpp CXX)

find_package(fmt REQUIRED)

add_executable(${PROJECT_NAME} sources/main.cpp)
target_link_libraries(${PROJECT_NAME} fmt::fmt)