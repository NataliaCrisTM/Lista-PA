cmake_minimum_required(VERSION 3.5)

project(Q17 LANGUAGES C)

add_executable(Q17 main.c)

install(TARGETS Q17
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
