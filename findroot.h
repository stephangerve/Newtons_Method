/*
 *	findroot.h
 */
#ifndef FINDROOT_H_EXISTS
#define FINDROOT_H_EXISTS

#include "function.h"
#include "derivative.h"

class findroot{
	
	private:
		int n;
		double xn; 
		double xn1;	
	public:
		findroot();
		~findroot();
		function y;
		derivative dydx;		
		void newtons_method();

};

#endif
