#!/bin/bash

set -e

g++ -c main.cpp -o main.o

g++ -c LorenzAttractor.cpp -o LorenzAttractor.o

g++ main.o LorenzAttractor.o -o MyProgram -lsfml-graphics -lsfml-window -lsfml-system
