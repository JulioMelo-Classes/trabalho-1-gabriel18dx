cmake_minimum_required(VERSION 3.5)
project(Trabalho-1 VERSION 0.1 LANGUAGES CXX )

include_directories( include )

add_executable( keno src/main.cpp src/Validacao.cpp src/Aposta.cpp )