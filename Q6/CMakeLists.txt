cmake_minimum_required(VERSION 3.5)

project(Q6 LANGUAGES C)

add_executable(Q6 main.c)

install(TARGETS Q6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
