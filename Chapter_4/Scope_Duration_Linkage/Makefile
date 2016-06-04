objs = linkage.o
exe = linkage
CFLAGS = -Wall -g
CPPFLAGS = -Wall -g

all: $(objs)
	g++ $(CFLAGS) -o $(exe) $(objs)

.PHONY: clean
clean:
	rm $(objs)
