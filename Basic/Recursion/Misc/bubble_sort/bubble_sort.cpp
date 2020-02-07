#include<iostream>

void bubbleSort(int* arr, int len){
	if(len == 1){
		return ;
	}

	for(int i=0 ; i<len-1; i++){
		if(arr[i] > arr[i+1]){
			std::swap(arr[i], arr[i+1]);
		}
	}

	bubbleSort(arr, len-1);
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	bubbleSort(arr, len);
	for(int i=0; i<len; i++){
		std::cout<<arr[i];
	}

	return 0;
}
