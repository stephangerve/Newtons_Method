/*
 *	derivative.cpp
 */
#include "derivative.h"
#include "function.h"

derivative::derivative(){


}

derivative::~derivative(){


}

double derivative::differentiate(function *Y, double X){
	return ((Y->f(X + machineEpsilon()) - (Y->f(X - machineEpsilon())))/(2.0*machineEpsilon())); 
}

double derivative::machineEpsilon(){
	double eps = 0.5;
	int count = 0;
	while((1.0 + eps) != 1.0){
		eps /= 2.0;	
		count++;		//prevent loss of sign. digits
		if(count == 16){
			break;
		}
	}
	return eps;

}
