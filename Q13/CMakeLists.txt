cmake_minimum_required(VERSION 3.5)

project(Q13 LANGUAGES C)

add_executable(Q13 main.c)

install(TARGETS Q13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
