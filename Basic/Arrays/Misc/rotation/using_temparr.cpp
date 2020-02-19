// Rotate using a temp array

#include<iostream>

// Rotate right
void rotate(int* arr,int len, int d){
	int temp[d];
	for(int i=len-1; i>= len-1-d; i--){
		temp[len-i-1] = arr[i];
	}

	for(int i=len-1;i>=d; i--){
		arr[i] = arr[i-d];
	}

	for(int i=0; i<d; i++){
		arr[i] = temp[i];
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7};
       	int d = 3;

	int len = 7;

	rotate(arr, len, d);
		
	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	} 
	std::cout<<'\n';
	return 0;
}
