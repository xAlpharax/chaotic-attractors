#!/bin/bash

set -e

g++ -c main.cpp -o main.o

g++ -c LorenzAttractor.cpp -o LorenzAttractor.o

g++ main.o LorenzAttractor.o -o ChaoticAttractors -lsfml-graphics -lsfml-window -lsfml-system

./ChaoticAttractors
