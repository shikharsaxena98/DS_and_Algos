#include<iostream>

//Since after deletion the lenth has to be changed so that durinf traversal 
//the last element is n-2 instead of n-1 so we use ptr for length of array

void traverse(int* arr, int* len_ptr){
	int len {*len_ptr};
	for(int i=0; i<len;i++){
		std::cout<<arr[i]<<"\n";
	}
}

void del(int* arr, int* len_ptr, int pos){
	int len { *len_ptr};
	for(int i=pos; i<len; i++){
		arr[i] = arr[i+1];
	}

	arr[len -1] = 0;

	*len_ptr -= 1;
}

int main(){
	
	int arr[] {1,2,3,4,6,434,68,8966,46};
	int len {sizeof(arr)/ sizeof(arr[0])};
	int* len_ptr {&len};

	traverse(arr, len_ptr);
	del(arr, len_ptr, 5);
	std::cout<<"After deletion \n";
	traverse(arr, len_ptr);

	return 0;
}
