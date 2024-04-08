cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(SOURCES
    main.cpp
    utilities.cpp
    # Add more sources as you go
)

include_directories(
    inc
    # Add more as you go
)

add_executable(
    a.out
    ${SOURCES}
)

