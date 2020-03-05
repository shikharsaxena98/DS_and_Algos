// Find rotation count in rotated sorted array

#include<iostream>

int getCount(int* arr,int i, int len){
	if(arr[i] > arr[i+1]){
		return 1;
	}

	return 1 + getCount(arr, i+1, len);
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int count = getCount(arr, 0, len);
	std::cout<<count<<'\n';
	return 0;
}
