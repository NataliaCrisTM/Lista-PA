cmake_minimum_required(VERSION 3.5)

project(Q14 LANGUAGES C)

add_executable(Q14 main.c)

install(TARGETS Q14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
