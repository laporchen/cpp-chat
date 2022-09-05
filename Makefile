CC = g++
All: main.cpp chat.o
	$(CC) chat.o main.cpp -o main 
chat.o: chat.cpp chat.h
	$(CC) -c chat.cpp 
