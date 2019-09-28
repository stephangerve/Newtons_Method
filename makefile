target: main.o newton.o
	g++ --std=c++11 -o newtonsMethod main.o newton.o

main.o:	main.cpp newton.h
	g++ --std=c++11 -c main.cpp newton.h

newton.o: newton.cpp newton.h
	g++ --std=c++11 -c newton.cpp newton.h

run:	
	clear
	./newtonsMethod

clean:	
	rm *.o
	rm newtonsMethod
