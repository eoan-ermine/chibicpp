cmake_minimum_required(VERSION 3.15)
project(chibicpp CXX)

find_package(fmt REQUIRED)

add_executable(${PROJECT_NAME} sources/main.cpp)
target_link_libraries(${PROJECT_NAME} fmt::fmt)

find_program(LIT lit)
if (LIT)
	add_custom_target(check-all
		COMMAND lit -v -D edir=${CMAKE_CURRENT_BINARY_DIR} -D cc=gcc test
		DEPENDS ${PROJECT_NAME}
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
else()
	message(WARNING "Install lit and reconfigure the project to enable the check-all target")
endif()