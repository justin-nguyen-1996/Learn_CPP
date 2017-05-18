objs = question_2.o io.o
CFLAGS = -Wall -g
CPPFLAGS = -Wall -g
exe = question_2

all: $(objs)
	g++ $(CFLAGS) -o $(exe) $(objs)

.PHONY: clean
clean: 
	rm -f $(objs) $(exe) 
