make:
	mkdir build
	gcc 1.pixel.c -lSDL2 -o build/1.pixel.o
	gcc 1.pixel.cpp -lSDL2 -o build/1.pixel.out
run:
	./build/1.pixel.out
clean:
	rm -r build
	clear
all:
	make clean
	make
	make run
