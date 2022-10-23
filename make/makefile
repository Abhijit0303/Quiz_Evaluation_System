BIN = ../bin
SRC = ../src
OBJ = ../obj
INC = ../inc
FILES = ../files
CFLAGS = -Wall
LFLAGS = -o
CC = gcc
IFLAGS = -I$(INC)

build: 
	$(CC) $(CFLAGS) $(SRC)/main.c $(LFLAGS) QEZ.o $(IFLAGS)
	mv QEZ.o $(OBJ)

run:
	$(OBJ)/QEZ.o $(FILES)/$(ARGV1) $(FILES)/$(ARGV2)

clean:
	rm -rf $(BIN)/*.o