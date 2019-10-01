#include <iostream>
#include <cmath>
#include <iomanip>
double macheps();

int main(){
	char again = 'y';
	double me = 0.0;
	while(again == 'y'){
		std::cout << std::endl;
		double me = macheps();
		std::cout << std::endl;
		//std::cout << "1.0 + e = " << 1.0 + me << std::endl; 
		std::cout << "macheps^2: " << pow(me,2) << std::endl;
		std::cout << std::endl;
		std::cout << "run again? ";
		std::cin >> again;
		if(again != 'y'){
			break;		
		}
	}
	



}

double macheps(){
	int count = 0;
	double eps = 0.5;
	double y = 0.0;
	double x = 0.0;
	double dist = 0.0;
	std::cout << "count" << std::setw(20);
	std::cout << "eps" << std::setw(20);
	std::cout << "y = 1 + e" << std::setw(20);
	std::cout << "x = 1 - e" << std::setw(20);
	std::cout << "1 - (y/x)" << std::endl;
	std::cout << "_____________________________________________________________________________________" << std::endl;
	while((1.0 + eps) != 1.0){
		count++;
		eps /= 2.0;
		y = 1.0 + eps;
		x = 1.0 - eps;
		dist = 1 - (y/x);
		if(count < 10){
			std::cout << "0" << count << std::setw(20);
		}
		else{
			std::cout << count << std::setw(20);
		}
		std::cout << ios::precision(16) << eps << std::setw(20);
		std::cout << y << std::setw(20);
		std::cout << x << std::setw(20);
		std::cout << dist << std::endl;	
	}
	//std::cout << "final count = " << count << std::endl;
	//std::cout << "one more: " << eps/2 << std::endl;
	return eps;
}
