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
	/*return ((Y->f(X + machineEpsilon()) - (Y->f(X - machineEpsilon())))/(2.0*machineEpsilon()));*/	
	return Y->f(X + machineEpsilon()) - Y->f(X - machineEpsilon());
}

double derivative::machineEpsilon(){
	double eps = 0.5;
	while((1.0 + eps) != 1.0){
		eps /= 2.0;	
	}
	return eps;

}
