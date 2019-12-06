#include<iostream>

// USING selection sort to sort an array
// Complexity:
int main(){
	int arr[10] {};
	int temp {0};
	// input 10 elements to arr: unsorted
	for(int i=0; i<10; i++){
		std::cin>>arr[i];
	}
	
	for(int init_index=0; init_index<10; init_index++){
		for(int cur_index=init_index; cur_index<10; cur_index++){
			if(arr[cur_index] < arr[init_index]){
				temp = arr[cur_index];
				arr[cur_index] = arr[init_index];
				arr[init_index] = temp;
			}
			
		}
	}

	//Print Sorted array
	for(int i=0; i<10; i++){
		std::cout<<arr[i]<<"\n";
	}
	
	return 0;
}
