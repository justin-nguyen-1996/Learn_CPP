OBJS = for_each_example.o
EXE = for_each
CFLAGS = -g -Wall -std=c++1z
CPPFLAGS = -g -Wall -std=c++1z
CC = g++

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	rm -rf $(OBJS) $(EXE)

