cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate 
    VERSION 1.0.0 
    LANGUAGES C CXX
    HOMEPAGE_URL https://github.com/WedaPashi10
)

set(SOURCES
    main.cpp
    utilities.cpp
    # Add more sources as you go
)

set(EXECUTABLE
    a.out
)

include_directories(
    inc
    jsonify
    # Add more as you go
)

set(CMAKE_CXX_FLAGS 
    "${CMAKE_CXX_FLAGS} -Wall -Werror -O3 -Wno-unknown-pragmas"
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(jsonify 
    STATIC 
    jsonify/jsonify.cpp
)

add_executable(
    ${EXECUTABLE}
    ${SOURCES}
)


# Link with the required libraries
target_link_libraries(${EXECUTABLE} 
    PUBLIC
    jsonify
    pthread 
    rt
)
