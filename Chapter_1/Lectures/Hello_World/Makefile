objs = hello_world.o
exe = hello
CFLAGS = -Wall

exe: $(objs)
	g++ $(objs) $(CFLAGS) -o $(exe)

.PHONY: clean
clean:
	rm $(objs) $(exe)
