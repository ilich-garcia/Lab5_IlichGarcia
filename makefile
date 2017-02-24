Lab5_IlichGarcia:	Lab5_IlichGarcia.o Function.o
	g++ Lab5_IlichGarcia.o Function.o -o main

Lab5_IlichGarcia.o:	Lab5_IlichGarcia.cpp Function.h
	g++ -c Lab5_IlichGarcia.cpp Function.cpp

Function.o:	Function.h
	g++ -c Function.cpp
