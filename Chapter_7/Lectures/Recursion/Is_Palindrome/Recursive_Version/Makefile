OBJS = is_palindrome_recursive.o
EXE = is_palindrome_recursive
CFLAGS = -g -Wall -std=c++11
CPPFLAGS = -g -Wall -std=c++11
CC = g++

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	rm $(EXE) $(OBJS)
