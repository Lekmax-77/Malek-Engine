cmake_minimum_required(VERSION 3.22)
project(GAME_ENGINE)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_executable(GAME_ENGINE
        src/Button.cpp
        src/Button.hpp)
