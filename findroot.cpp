#include <iostream>
#include <iomanip>
#include "findroot.h"
#include "function.h"
#include "derivative.h"

findroot::findroot(){
	std::cout << "Root Approximation Program" << std::endl;
	std::cout << "Enter the number of iterations: ";
	std::cin >> n;
	std::cout << "Enter inital guess for root: x0 = ";
	std::cin >> xn;
	xn1 = 0.0;

}

findroot::~findroot(){

}

void findroot::newtons_method(){
	std::cout << std::endl << "Using Newtons Method:" << std::endl;
	std::cout << "n" << std::setw(10); 
	std::cout << "xn" << std::setw(10); 
	std::cout << "f(xn)" << std::setw(10);
	std::cout << "f'(xn)" << std::setw(10);
	std::cout << "xn1" << std::endl;
	std::cout << "_________________________________________" << std::endl;			for(int i = 0; i < n; i++){
		std::cout << i << std::setw(10);
		std::cout << xn << std::setw(10);
		std::cout << y.f(xn) << std::setw(10);
		std::cout << dydx.differentiate(&y,xn) << std::setw(10);
		xn1 = xn - ((y.f(xn))/(dydx.differentiate(&y,xn)));
		std::cout << xn1 << std::endl;
		xn = xn1;
	}

}
