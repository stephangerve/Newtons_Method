/*
 *	function.cpp
 */
#include <iostream>
#include "function.h"
#include <cmath>

function::function(){
	printFunctions();
	std::cout << "Choose a function: ";
	std::cin >> fnum;
}

function::~function(){

}

double function::f(double x){
	switch(fnum){
		case 0: return pow(x,2) + 4*x + 4;
			break;

		case 1: return x - 2 * sin(x);
			break;

		case 2:	return pow(x,3) - sin(x) - 7;
			break;

		case 3: return x + sin(x) - 1;
			break;

		case 4: if(x >= 2){
				return pow(x,5) + pow(x,2) - 7*pow(x,3) - 1;
				break;
			}
			else{
				return nan("");
				break;
			}
	}

}	

void function::printFunctions(){
	std::cout << "0. f(x) = x^2 + 4*x + 4" << std::endl;
	std::cout << "1. f(x) = x - 2*sin(x)" << std::endl;
	std::cout << "2. f(x) = x^3 - sin(x) - 7" << std::endl;
	std::cout << "3. f(x) = x + sin(x) - 1" << std::endl;
	std::cout << "4. f(x) = x^5 + x^2 - 7*x^3 - 1, x >= 2" << std::endl;

}
