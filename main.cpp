/*
 *	main.cpp
 */
#include <iostream>
#include "findroot.h"

int main(){
	char again = 'y';
	while(again == 'y' || again == 'Y'){
		findroot *approximate = new findroot();
		approximate->newtons_method();
		delete approximate;
		std::cout << std::endl;
		std::cout << "Run again ('y' or 'n')? ";
		std::cin >> again;
		std::cout << std::endl;
	}

	return 0;

}
