cmake_minimum_required(VERSION 3.5)

project(Q18 LANGUAGES C)

add_executable(Q18 main.c)

install(TARGETS Q18
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
