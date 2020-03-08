#include<iostream>

void quick_mv(int* arr, int len){
	int j=len;
	for(int i=len-1; i>=0; i--){
		if(arr[i] == 0){
			j--;
			std::swap(arr[i], arr[j]);
		}
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr= new int[len];

	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	quick_mv(arr, len);

	for(int i=0;  i<len;  i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}
