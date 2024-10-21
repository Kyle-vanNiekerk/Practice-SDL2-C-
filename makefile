make:
	mkdir build
	g++ 1.pixel.cpp -lSDL2 -o build/1.pixel.o
run:
	./build/1.pixel.o
clean:
	rm -r build
	clear
