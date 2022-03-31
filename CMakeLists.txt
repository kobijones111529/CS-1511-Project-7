cmake_minimum_required(VERSION 3.10)

project(Project7)

set(SOURCES
    # Main
    src/main.cpp

    src/Bag.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE include)
