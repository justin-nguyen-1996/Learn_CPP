CFLAGS = -Wall -g -std=gnu++0x
CPPFLAGS = -Wall -g -std=gnu++0x
CC = g++

SRCS = Point2d.cpp
OBJS = $(subst .cpp,.o,$(SRCS))
EXE = MAIN

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	rm $(EXE) $(OBJS)
