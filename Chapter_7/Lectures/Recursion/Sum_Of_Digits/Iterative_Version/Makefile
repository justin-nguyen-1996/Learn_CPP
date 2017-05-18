OBJS = sum_of_digits_iterative.o
EXE = sum_of_digits_iterative
CFLAGS = -g -Wall -std=c++11
CPPFLAGS = -g -Wall -std=c++11
CC = g++

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	rm $(EXE) $(OBJS)
