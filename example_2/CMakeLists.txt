cmake_minimum_required(VERSION 3.10)

project(example_1)

get_filename_component(CURRENT_FOLDER_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
set(EXE_NAME ${CURRENT_FOLDER_NAME})

# Add the source files for the project
file(GLOB SOURCES "src/*.cpp")
add_executable(${EXE_NAME} ${SOURCES})

# Set compiler flags for the "Debug" build type
target_compile_options(${EXE_NAME} PRIVATE $<$<CONFIG:Debug>:-Wall>)
target_compile_definitions(${EXE_NAME} PRIVATE $<$<CONFIG:Debug>:DEBUG_BUILD>)

# Set compiler flags for the "Release" build type
target_compile_options(${EXE_NAME} PRIVATE $<$<CONFIG:Release>:-O2>)
target_compile_definitions(${EXE_NAME} PRIVATE $<$<CONFIG:Release>:RELEASE_BUILD>)
