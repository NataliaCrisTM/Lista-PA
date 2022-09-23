cmake_minimum_required(VERSION 3.5)

project(Q9 LANGUAGES C)

add_executable(Q9 main.c)

install(TARGETS Q9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
