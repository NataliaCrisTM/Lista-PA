cmake_minimum_required(VERSION 3.5)

project(Q1 LANGUAGES C)

add_executable(Q1 main.c)

install(TARGETS Q1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
