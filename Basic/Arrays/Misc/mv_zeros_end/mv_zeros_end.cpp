// Move all zeros to the end

#include<iostream>

void mv_zeros(int* arr, int len){
	int j = -1;
	for(int i=0; i<len; i++){
		if(arr[i] != 0){
			j++;
			std::swap(arr[i], arr[j]);
			
		}
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr=  new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	mv_zeros(arr, len);
	
	for(int i=0;i<len;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}
