CFLAGS = -Wall -g -std=gnu++0x
CPPFLAGS = -Wall -g -std=gnu++0x
RM = rm
CC = g++

SRCS = $(shell find -name . "*.cpp")
OBJS = $(PATSUBST .cpp,.o,$(SRCS))

all: $(OBJS)
    $(CC) $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
    $(RM) $(EXE) $(OBJS)
