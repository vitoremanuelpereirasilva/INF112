all: main.exe
	./main

main.exe: main.o Soma.o Power.o mdc.o
	g++  main.o Soma.o Power.o mdc.o -o main

main.o: main.cpp
	g++ -c main.cpp

Soma.o: Soma.cpp Soma.h
	g++ -c Soma.cpp Soma.h

Power.o: Power.cpp Power.h
	g++ -c Power.cpp Power.h

mdc.o: mdc.cpp mdc.h
	g++ -c mdc.cpp mdc.h
