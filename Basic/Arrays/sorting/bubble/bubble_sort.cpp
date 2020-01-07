// Bubble sort
// Complexity : O(n^2)
// Algo: 1. Start
// 	 2. loop1 i=0 to n-1
// 	 3. 	loop2 j = 0 to n-2
// 	 4. 		if arr[j+1]< arr[j]: swap
// 	 5. 	End
// 	   End

#include<iostream>
void traverse(int* arr, int len){
	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<"\n";
	}
}

void swap(int* val1, int* val2){
	int tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;
}

void bubble(int* arr,int len){
	for(int i=0; i<len; i++){
		for(int j=0; j<len-1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main(){
	int arr[] {3,7,10,43,6,35,66,61,50};
	int len {sizeof(arr)/sizeof(arr[0])};

	traverse(arr, len);

	bubble(arr, len);
	std::cout<<"After Sorting:"<<"\n";

	traverse(arr, len);
}
