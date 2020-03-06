all: simuPi

simuPi: main.o matsu.o fctPi.o fctPiMoy.o
	gcc -Wall main.o matsu.o fctPi.o fctPiMoy.o -o simuPi

main.o: main.c header.h
	gcc -Wall -c main.c -o main.o

matsu.o: matsu.c
	gcc -Wall -c matsu.c -o matsu.o

fctPi.o: fctPi.c
	gcc -Wall -c fctPi.c -o fctPi.o

fctPiMoy.o: fctPiMoy.c
	gcc -Wall -c fctPiMoy.c -o fctPiMoy.o

clean := $(shell rm *.o)