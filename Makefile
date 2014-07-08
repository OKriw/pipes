all: pipe

pipe: pipes.c pipe_communication.o
	gcc pipes.c pipe_communication.o -o pipe

pipe_communication: pipe_communication.c
	gcc pipe_communication.c -c -o pipe_communication.o

clean:
	rm -rf *o pipe
