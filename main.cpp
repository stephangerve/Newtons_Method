/*
 *	main.cpp
 */
#include <iostream>
#include "findroot.h"

int main(){

	findroot *approximate = new findroot();
	approximate->newtons_method();
	delete approximate;

	return 0;

}
