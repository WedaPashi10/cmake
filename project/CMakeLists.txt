cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate 
    VERSION 1.0.0 
    LANGUAGES C CXX
)

set(SOURCES
    main.cpp
    utilities.cpp
    # Add more sources as you go
)

include_directories(
    inc
    # Add more as you go
)

set(CMAKE_CXX_FLAGS 
    "${CMAKE_CXX_FLAGS} -std=c++20 -Wall -Werror -O3 -Wno-unknown-pragmas"
)

add_executable(
    a.out
    ${SOURCES}
)
