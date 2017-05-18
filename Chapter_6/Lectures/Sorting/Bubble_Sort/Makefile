OBJS = bubble_sort.o
EXE = bub_sort
CFLAGS = -g -Wall -std=c++1z
CPPFLAGS = -g -Wall -std=c++1z
CC = g++

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm $(EXE) $(OBJS)
