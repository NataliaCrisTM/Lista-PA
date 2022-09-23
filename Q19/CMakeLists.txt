cmake_minimum_required(VERSION 3.5)

project(Q19 LANGUAGES C)

add_executable(Q19 main.c)

install(TARGETS Q19
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
