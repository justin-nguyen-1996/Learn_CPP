OBJS = function_pointers.o
EXE = fxn_ptrs
CC = g++
CFLAGS = -g -Wall -std=c++11
CPPFLAGS = -g -Wall -std=c++11

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
	rm $(EXE) $(OBJS)
