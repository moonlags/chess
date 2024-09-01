run: build
	@./bin/chess

build:
	@gcc -o bin/chess -I/usr/inlude -lraylib src/*.c
