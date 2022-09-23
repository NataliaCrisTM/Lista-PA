cmake_minimum_required(VERSION 3.5)

project(Q4 LANGUAGES C)

add_executable(Q4 main.c)

install(TARGETS Q4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
