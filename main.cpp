#include <iostream>
#include "newton.h"
#include "function.h"
#include "derivative.h"

int main(){

	funct *y = new funct();
	newton *method = new newton();
	derivative *dydx = new derivative();
	method->compute();
	std::cout << dydx->machineEpsilon() << std::scientific << std::endl;
	delete y;
	delete method;

	return 0;

}
