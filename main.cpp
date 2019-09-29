#include <iostream>
#include "newton.h"
#include "function.h"
#include "derivative.h"

int main(){

	function *y = new function();
	newton *method = new newton();
	method->compute();


	return 0;

}
