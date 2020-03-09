#include<iostream>

void seg_even_odd(int* arr, int len){
	int i = -1;
	for(int j=0; j<len; j++){
		if(arr[j] % 2 == 0){
			i++;
			std::swap(arr[j], arr[i]);
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

	seg_even_odd(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}
