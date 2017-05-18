OBJS = stack.o
EXE = STACK
CFLAGS = -Wall -g -std=c++11
CPPFLAGS = -Wall -g -std=c++11 
CC = g++

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean: 
	rm $(EXE) $(OBJS)
