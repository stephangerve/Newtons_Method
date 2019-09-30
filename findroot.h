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
	public:
		findroot();
		~findroot();
		function *y = new function();
		derivative *dydx = new derivative();		
		void newtons_method();

};

#endif
