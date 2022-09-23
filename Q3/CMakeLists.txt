cmake_minimum_required(VERSION 3.5)

project(Q3 LANGUAGES C)

add_executable(Q3 main.c)

install(TARGETS Q3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
