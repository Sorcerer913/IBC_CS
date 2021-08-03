#include <iostream>
#include <cmath>

int main(void){
	int n;
	float x;
	std::cout << "accuracy (from 1 to 32): ";
	std::cin >> n;
	if(n > 32 || n < 1){
		std::cout << "number is not in range" << std::endl;
		return 0;
	}
	std::cout << "x: ";
	std::cin >> x;
	if(x < 0){
		std::cout << "number must be zero or positive" << std::endl;
	}
	long double sum = 1;
	int k = 1;
	for(int i = 1; i < n; i++){
		sum += ((long double) std::pow(x,i))/(k*i);
		k *= i;
	}
	std::cout << "e ^ x = " << sum << std::endl;
	return 0;

}
