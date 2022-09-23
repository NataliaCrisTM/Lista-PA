cmake_minimum_required(VERSION 3.5)

project(Q7 LANGUAGES C)

add_executable(Q7 main.c)

install(TARGETS Q7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
