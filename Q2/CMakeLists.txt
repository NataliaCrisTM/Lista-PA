cmake_minimum_required(VERSION 3.5)

project(Q2 LANGUAGES C)

add_executable(Q2 main.c)

install(TARGETS Q2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
