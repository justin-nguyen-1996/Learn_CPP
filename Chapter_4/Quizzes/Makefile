objs = monster.o
exe = monster
CFLAGS = -Wall -g -std=c++11
CPPFLAGS = -Wall -g -std=c++11

all: $(objs)
	g++ $(CFLAGS) -o $(exe) $(objs)

.PHONY: clean
clean:
	rm $(objs) $(exe)

