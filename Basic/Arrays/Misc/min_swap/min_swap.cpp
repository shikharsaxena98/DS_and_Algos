// Minimum swaps required to bring all elements less than or equal to k together

#include<iostream>

int findMinSwap(int* arr, int len, int k){
	int size = 0;
	for(int i=0; i<len; i++){
		if(arr[i] <= k) size++;
	}

	int num = 0;
	int  max = 0;
	for(int i=0; i<size;i++){
		if(arr[i] <= k) num++; 
	}

	for(int i=size; i<len; i++){
		if(num > max) max = num;

		if(arr[i] <= k) num++;

		if(arr[i-size] <= k) num--; 
	}

	return size - max;
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int k;
	std::cin>>k;

	int num =findMinSwap(arr, len, k);
	std::cout<<"Min swaps: "<<num<<'\n';

	return 0;
}
