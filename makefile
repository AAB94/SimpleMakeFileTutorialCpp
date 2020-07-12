CC = g++

.PHONY: clean
clean:
	rm -rf *.so *.o test

all: test

libcommon.so: common.hpp common.cpp
	$(CC) -shared -fPIC -o libcommon.so common.cpp

math.o: custom_math.cpp	
	$(CC) -c custom_math.cpp -o custom_math.o

test: main.cpp libcommon.so custom_math.o
	$(CC) -g -o test main.cpp custom_math.o -ldl libcommon.so