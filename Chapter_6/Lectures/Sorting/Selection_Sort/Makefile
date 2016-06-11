OBJS = selection_sort.o
CFLAGS = -Wall -g -std=c++1z
CPPFLAGS = -Wall -g -std=c++1z
EXE = sel_sort
CC = g++

sel_sort: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm $(OBJS) $(EXE)

