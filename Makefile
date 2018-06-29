build:
	g++ -std=c++14 -o test test.cpp

test: build
	./test

clean:
	rm test
