#include <iostream>
#include "findroot.h"
#include "function.h"
#include "derivative.h"


findroot::findroot(){
	std::cout << "Root Approximation Program" << std::endl;
	std::cout << "Enter the number of iterations: ";
	std::cin >> n;
	function *y = new function();
	derivative *dydx = new derivative();

}

findroot::~findroot(){
	delete y();

}

void findroot::newtons_method(){
	std::cout << std::endl << "Using Newtons Method:" << std::endl;
	std::cout << "n		xn	f(xn)" << std::endl;
	std::cout << "_______________________" << std::endl;
	for(int i = 0; i < n; i++){
		std::cout << n;
		std::cout << "				" << y->fx(n) << std::endl; 	
	
	}





}
