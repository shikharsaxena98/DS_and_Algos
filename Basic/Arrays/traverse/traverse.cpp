#include<iostream>
void traverse(int* arr, int n){
	for(int i=0; i<n; i++){
		std::cout<<arr[i]<<"\n";
	}
}

int main(){
	int arr[] {1,2,5,4,7};
	int len {sizeof(arr)/sizeof(arr[0])};
	traverse(arr, len);
	return 0;
}
