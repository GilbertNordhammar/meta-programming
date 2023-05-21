cmake_minimum_required(VERSION 3.10)

project(meta-programming)

set(CMAKE_CXX_STANDARD 20)

file(GLOB EXAMPLE_FOLDERS example*)

foreach(FOLDER ${EXAMPLE_FOLDERS})
    add_subdirectory(${FOLDER})
endforeach()