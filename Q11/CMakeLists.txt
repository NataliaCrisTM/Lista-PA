cmake_minimum_required(VERSION 3.5)

project(Q11 LANGUAGES C)

add_executable(Q11 main.c)

install(TARGETS Q11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
