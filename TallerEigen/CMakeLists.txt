cmake_minimum_required(VERSION 3.5)

project(TallerEigen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TallerEigen main.cpp eigen.cpp eigen.h)

install(TARGETS TallerEigen
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
