// Swap ith and i+2 th number of an array
#include<iostream>

void traverse(int* arr,int len){
	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<"\n";
	}
}

void swap_fun(int* arr, int len){
	int temp {};
	for(int i=0; i<len-2; i++){
		temp = arr[i];
		arr[i] = arr[i+2];
		arr[i+2] = temp;
	}

}

int main(){
	int arr[] {1,2,3,4,5,6,7,8,9};
	int len {sizeof(arr)/sizeof(arr[0])};
	
	traverse(arr, len);
	swap_fun(arr, len);
	std::cout<<"\n";
	traverse(arr, len);
	return 0;
}
