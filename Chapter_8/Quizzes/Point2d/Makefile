OBJS = Point2d.o
CFLAGS = -Wall -g -std=gnu0x
CPPFLAGS = -Wall -g -std=gnu++0x
CC = g++
EXE = POINT2D

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	rm $(EXE) $(OBJS)
