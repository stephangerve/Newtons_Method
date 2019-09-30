target: main.o findroot.o function.o derivative.o
	g++ --std=c++11 -o program main.o findroot.o function.o derivative.o

main.o:	main.cpp findroot.h
	g++ --std=c++11 -c main.cpp findroot.h

findroot.o: findroot.cpp findroot.h
	g++ --std=c++11 -c findroot.cpp findroot.h

function.o: function.cpp function.h derivative.h
	g++ --std=c++11 -c function.cpp function.h derivative.h

derivative.o: derivative.cpp derivative.h
	g++ --std=c++11 -c derivative.cpp derivative.h

run:	
	clear
	./program

clean:	
	rm *.o
	rm *.gch
	rm program
