CC = clang
BIN = bin
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all: clean build

build: $(OBJ)
	$(CC) -o $(BIN)/dice $^ 

run: all 
	$(BIN)/dice 

clean:
	rm $(BIN)/dice
