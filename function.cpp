#include "function.h"

function::function(){

}

function::~function(){

}

double function::f1(double x){
	return x - 2*sin(x);
}

double function::f2(double x){
	return pow(x,3) - sin(x) - 7;
}

double function::f3(double x){
	return x + sin(x) - 1;
}

double function::f4(double x){
	if(x >= 2){
		return pow(x,5) + pow(x,2) - 7*pow(x,3) - 1;
	}
	else{
		return NaN;
	}
	
}	
