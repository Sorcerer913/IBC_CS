#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

int find(int n, std::vector<int> vec, int d){
	int center = vec.size()/2;
	if(vec.empty()){
		return -1;
	}
	if(vec[center] == n){
		return center+d; 
	}
	if(vec[center] < n){
		std::vector<int> forRec;
		forRec.insert(forRec.end(), vec.begin() + center + 1, vec.end());
		return find(n, forRec, center + d + 1);
	}else{
		std::vector<int> forRec;
		forRec.insert(forRec.end(), vec.begin(), vec.begin() + center);
		return find(n, forRec, d);
	}
}

int main(){
	int n;
	std::cout << "list length (bitween 1 and 100): ";
	std::cin >> n;
	if(n < 1 || n > 100){
		std::cout << "number is not in range." << std::endl;
		return 0;
	}
	std::vector<int> arr(n);
	for(int i = 0; i < n; i++){
		arr[i] = rand();
	}
	std::sort(arr.begin(), arr.end());

	std::cout << "array: [";
	for(int i = 0; i < n-1; i++){
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[n-1] << "]." << std::endl;
	
	long long ask_num;

	std::cout << "what number you need?" << std::endl;
	std::cout << " - ";
	std::cin >> ask_num;
	
	int num = find(ask_num, arr, 0);

	if(num == -1){
		std::cout << "There are no number there." << std::endl; 
	}else{
		std::cout << "Number is: " << num << std::endl;
	}

	return 0;

}
