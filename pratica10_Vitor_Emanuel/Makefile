all: main.exe
	./main

main.exe: main.o Alunos.o
	g++  main.o Alunos.o -o main

main.o: main.cpp
	g++ -c main.cpp

Alunos.o: Soma.cpp Soma.h
	g++ -c Alunos.cpp Alunos.h

