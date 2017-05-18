CFLAGS = -Wall -g -std=gnu++0x
CPPFLAGS = -Wall -g -std=gnu++0x

CC = g++
RM = rm

SRCS = $(shell find . -name "*.cpp")
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
EXE = MAIN

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
	$(RM) $(EXE) $(OBJS)
