#include<iostream>

void print_arr(int arr[], int size){
	for(int i=0; i<size; i++){
		std::cout<<arr[i]<<"\n";
	}
}

void bubble_sort(int arr[], int size){
	int temp {};
	for(int i=0;i<size;i++){
		for(int j=0; j<size; j++){
			if(arr[j+1] < arr[j]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
			       	arr[j] = temp;	
			}	
		}
	}
}

int main(){
	int arr[6] {80, 2, 4, 21, 65, 8};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, size);
	print_arr(arr, size);
	return 0;
}
