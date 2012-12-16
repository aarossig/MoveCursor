SRC_CLI = src_cli/
SRC_LIB = src_lib/
BIN = bin/
OBJ = obj/

LDFLAGS  = `pkg-config --cflags --libs x11`

SRC = movecursor.c
BIN_CLI = $(SRC:.c=)
OBJ_LIB = $(SRC:.c=.o)
BIN_LIB = $(SRC:.c=.so)

all: shared cli

cli:
	gcc -o $(BIN)$(BIN_CLI) $(SRC_CLI)$(SRC) $(BIN)$(BIN_LIB) 

shared:
	gcc -fPIC -Wall -c -o $(OBJ)$(OBJ_LIB) $(SRC_LIB)$(SRC)
	gcc -shared -o $(BIN)$(BIN_LIB) $(OBJ)$(OBJ_LIB) $(LDFLAGS)
	
run: all
	./$(EXEC) 800 600

clean:
	rm -f $(BIN)*
	rm -f $(OBJ)*
