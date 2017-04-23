all: ./threadStresser.cpp
	g++ -Wall threadStresser.cpp functions.cpp -o ThreadStresser -std=c++11 -pthread
run: all
	./ThreadStresser
clean:
	rm run || rm *.o
