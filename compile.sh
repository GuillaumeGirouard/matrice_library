#!/bin/bash
g++ -c ../matrice.cpp
g++ -c ../examples/example_matrice.cpp
g++ -o Matrice example_matrice.o matrice.o
