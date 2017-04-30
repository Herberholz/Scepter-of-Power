#Makefile for Sceptor of Power

#set up flags
CFLAGS = -std=c++11 -g -Wall 
CC = g++

#build target executable which accounts for all program files in the directory
Sceptor of Power: game.cpp profession.cpp race.cpp main.cpp
		$(CC) game.cpp profession.cpp race.cpp main.cpp  $(CFLAGS) -I/. 

clean:
	rm a.out
