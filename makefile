all:
	gcc arg.c

clean:
	rm a.out

run: all
	./a.out
