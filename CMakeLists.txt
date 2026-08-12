cmake_minimum_required(VERSION 3.16)

project(chess CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(chess
    main.cpp
    board.cpp
)

target_include_directories(chess PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
