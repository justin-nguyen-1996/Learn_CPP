objs = add.o main.o
CFLAGS = -Wall
exe = exe

all: $(objs)
	g++ $(objs) $(CFLAGS) -o $(exe)

.PHONY: clean
	rm $(objs) $(exe)
