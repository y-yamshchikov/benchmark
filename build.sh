#!/bin/bash
mv measure old_measure
g++ -c main.cpp measure.cpp -std=c++17
g++ -o measure main.o measure.o

