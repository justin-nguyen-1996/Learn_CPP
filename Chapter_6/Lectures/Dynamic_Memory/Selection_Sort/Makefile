OBJS = sort_sizeless_list.o
EXE = sort
CFLAGS = -g -Wall -std=c++1z
CPPFLAGS = -g -Wall -std=c++1z
CC = g++

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	rm $(EXE) $(OBJS)
