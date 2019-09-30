#include "derivative.h"


derivative::derivative(){




}

derivative::~derivative(){


}

double derivative::differentiate(double x){



}

double derivative::machineEpsilon(){
	double eps = 0.5;
	while((1 + eps) != 1){
		eps /= 2;	
	}
	return eps;

}
