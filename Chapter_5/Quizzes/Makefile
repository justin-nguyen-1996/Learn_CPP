OBJS = program.o
EXE = hi_lo
CFLAGS = -Wall -g -std=c++0x
CPPFLAGS = -Wall -g -std=c++0x

all: $(OBJS)
        g++ $(CFLAGS) -o $(EXE) $(OBJS)

.PHONY: clean
clean:
        rm $(OBJS) $(EXE)
