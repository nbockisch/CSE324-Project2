CC=g++
CFLAGS=-g -Wall

all: interpret terminal main

interpret: interpret.cpp
	$(CC) -c interpret.cpp

terminal: terminal.cpp
	$(CC) -c terminal.cpp

main: main.cpp terminal.o
	$(CC) $(CFLAGS) -o interpreter main.cpp interpret.o terminal.o
