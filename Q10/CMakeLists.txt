cmake_minimum_required(VERSION 3.5)

project(Q10 LANGUAGES C)

add_executable(Q10 main.c)

install(TARGETS Q10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
