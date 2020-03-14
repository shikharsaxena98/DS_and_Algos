#include<iostream>

int findMax(int* arr, int len, int idx, int max_idx){
	if(idx == len){
		return max_idx;
	}

	if(arr[idx] > arr[max_idx]){
		return findMax(arr, len, idx+1, idx);
	 } else {
	 	return findMax(arr, len, idx+1, max_idx);
	 }
}

int main(){
	int len;
	std::cin>>len;
	
	int* arr= new int[len];

	for(int i=0; i<len ;i++){
		std::cin>>arr[i];
	}

	std::cout<<findMax(arr, len, 1, 0)<<'\n';

	return 0;
}
