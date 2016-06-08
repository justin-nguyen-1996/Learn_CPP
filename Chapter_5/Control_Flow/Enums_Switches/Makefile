objs = enums_switches.o
exe = exe
CFLAGS = -Wall -g
CPPFLAGS = -Wall -g

all: $(objs)
    g++ $(CFLAGS) -o $(exe) $(objs)
    
.PHONY: clean
clean:
    rm $(objs) $(exe)
