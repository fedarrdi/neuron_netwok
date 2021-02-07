cmake_minimum_required(VERSION 3.17)
project(chess_neuron_network C)

set(CMAKE_C_STANDARD 99)

add_executable(chess_neuron_network main.c a.h chess.c ai.c neuron_network_funksions.c)