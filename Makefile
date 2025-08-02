dirs:
	mkdir ./bin; mkdir ./test

all:
	gcc ./src/* -o ./bin/app

run:
	./bin/app

debug:
	gcc -g -o ./test/prog ./src/*

rundebug:
	gdb ./test/prog

memcheck:
	valgrind -s --leak-check=full --track-origins=yes ./test/prog

clean:
	rm -r ./bin; rm -r ./test
