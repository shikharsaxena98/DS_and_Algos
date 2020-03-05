// Reversal Algorithm

#include<iostream>

void reverse(int* arr, int s, int e){
	for(int i=s; i<(e+s) /2; i++){
		std::swap(arr[i], arr[e+s-i]);
	}
}

void revRot(int* arr, int len, int d){
	reverse(arr, 0, len-d-1);
	reverse(arr, len-d, len-1);
	reverse(arr, 0, len-1);
}

int main(){
	int arr[] = {1,2,3,4,5,6,7};
	revRot(arr, 7, 2);

	for(int i=0; i<7; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}
