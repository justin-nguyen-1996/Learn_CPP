OBJS = reverse_string_recursive.o
EXE = reverse_string_recursive
CFLAGS = -g -Wall -std=c++11
CPPFLAGS = -g -Wall -std=c++11
CC = g++

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	rm $(EXE) $(OBJS)
