#include <iostream>
#include <iomanip>
#include "findroot.h"
#include "function.h"
#include "derivative.h"


findroot::findroot(){
	std::cout << "Root Approximation Program" << std::endl;
	std::cout << "Enter the number of iterations: ";
	std::cin >> n;

}

findroot::~findroot(){
	delete y;
	delete dydx;

}

void findroot::newtons_method(){
	std::cout << std::endl << "Using Newtons Method:" << std::endl;
	std::cout << "n" << std::setw(10); 
	std::cout << "xn" << std::setw(10); 
	std::cout << "f(xn)" << std::endl;
	std::cout << "_______________________" << std::endl;
	for(int i = 0; i < n; i++){
		std::cout << n << std::setw(10);
		std::cout << "." << std::setw(10);
		std::cout << y->fx(n) << std::endl;	
	}

}
