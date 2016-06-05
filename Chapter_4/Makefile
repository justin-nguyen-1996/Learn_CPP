objs = structs.o
exe = structs_exe
CFLAGS = -Wall -g -std=c++11
CPPFLAGS = -Wall -g -std=c++11

all: $(objs)
	g++ $(CFLAGS) -o $(exe) $(objs)

.PHONY: clean
clean:
	rm $(objs)
