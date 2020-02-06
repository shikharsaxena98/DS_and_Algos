#include<iostream>

bool isSorted(int* arr, int len){
	if(len==1){
		return true;
	} 

	if(arr[0] < arr[1] && isSorted(arr + 1, len -1)){
		return true;
	}

	return false;
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len;i++){
		std::cin>>arr[i];
	}

	std::cout<<isSorted(arr, len)<<'\n';

	return 0;
}
