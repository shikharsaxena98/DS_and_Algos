#include<iostream>

void rearrange(int* arr, int len){
	for(int i=0; i<len; i++){
		if(arr[i] == -1);
		else if(arr[i] != i){
			std::swap(arr[arr[i]], arr[i]);
		}
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	rearrange(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}
