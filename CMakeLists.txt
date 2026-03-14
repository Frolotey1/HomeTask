cmake_minimum_required(VERSION 3.16)

project(CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CPP main.cpp
    Animal.h
    Animal.cpp
    Libraries.h
    Cat.h
    Cat.cpp
    Dog.h
    Dog.cpp
    Bird.h
    Bird.cpp
    FlyingCat.cpp
    FlyingCat.h)

include(GNUInstallDirs)
install(TARGETS CPP
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
