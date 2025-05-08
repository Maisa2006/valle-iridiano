cmake_minimum_required(VERSION 3.30)
project(proyectofinal)

set(CMAKE_CXX_STANDARD 20)

add_executable(proyectofinal main.cpp
        Criatura.cpp
        Criatura.h
        Nodo.cpp
        Nodo.h
        Ecosistema.cpp
        Ecosistema.h
        Observador.cpp
        Observador.h)
