target: main.o newton.o function.o derivative.o
	g++ --std=c++11 -o newtonsMethod main.o newton.o function.o derivative.o

main.o:	main.cpp newton.h
	g++ --std=c++11 -c main.cpp newton.h

newton.o: newton.cpp newton.h
	g++ --std=c++11 -c newton.cpp newton.h

function.o: function.cpp function.h
	g++ --std=c++11 -c function.cpp function.h

derivative.o: derivative.cpp derivative.h
	g++ --std=c++11 -c derivative.cpp derivative.h

run:	
	clear
	./newtonsMethod

clean:	
	rm *.o
	rm *.gch
	rm newtonsMethod
