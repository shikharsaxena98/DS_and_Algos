#include<iostream>

void insert(int* arr, int len, int val, int pos){
	for(int i= len-1;i>=pos; i--){
		arr[i+1] = arr[i];
	}
	
	arr[pos] = val;

}

void traverse(int* arr, int len){
	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<"\n";
	}
}

int main(){
	int arr[] {1,2,3,4,6,7,8};
	int len {sizeof(arr)/sizeof(arr[0])};

	traverse(arr, len);
	insert(arr, len, 20, 2);
	std::cout<<"After insertion"<<"\n";
	traverse(arr, len);

	return 0;
}
