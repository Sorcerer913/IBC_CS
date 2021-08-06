#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> left, std::vector<int> right){
	std::vector<int> merged;
	int idxl, idxr;
	idxl = idxr = 0;
	while(idxl < left.size() && idxr < right.size()){
		if(left[idxl] < right[idxr]){
			merged.push_back(left[idxl]);
			++idxl;
		}else{
			merged.push_back(right[idxr]);
			++idxr;
		}
	}

	while(idxl < left.size){
		merged.push_back(left[idxl]);
		++idxl;
	}
	//todo
}

int main(void){
	int n;
	std::cin >> n;
	if(n < 1){
		std::cout << "No" << std::endl;
	}

	std::vector<int> array(n);
	for(int i = 0; i < n; ++i){
		cin >> array[i];
	}

	//todo

}
