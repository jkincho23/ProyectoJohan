cmake_minimum_required(VERSION 3.22)
project(Proyecto2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto2 main.cpp Paciente.h Paciente.cpp Profesor.h Profesor.cpp Estudiante.h Estudiante.cpp Medico.h Medico.cpp Transporte.h Transporte.cpp)
