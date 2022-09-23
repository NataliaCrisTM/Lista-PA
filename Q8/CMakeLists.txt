cmake_minimum_required(VERSION 3.5)

project(Q8 LANGUAGES C)

add_executable(Q8 main.c)

install(TARGETS Q8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
