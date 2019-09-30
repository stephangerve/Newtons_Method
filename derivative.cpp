#include "derivative.h"
#include "function.h"

derivative::derivative(){

	//function *y = new function();


}

derivative::~derivative(){


}

double derivative::differentiate(double x){
	double fx = 0.0;	
}

double derivative::machineEpsilon(){
	double eps = 0.5;
	while((1 + eps) != 1){
		eps /= 2;	
	}
	return eps;

}
