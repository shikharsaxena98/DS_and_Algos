#include<iostream>

void print_arr(int* arr, int len){
	for(int i=0; i<len; i++){
                std::cout<<arr[i]<<" ";
        }

	std::cout<<'\n';
}

int findMinidx(int* arr,int start, int end){
	int minval {arr[start]};
	int min_idx {start};

	for(int i=start; i<end; i++){
		if(arr[i]<minval){
		       	minval = arr[i];
			min_idx = i;
		}
	}
	std::cout<<"Min Idx: "<<min_idx<<'\n';
	return min_idx;
}

void selSort(int* arr, int start, int end){
	if(start >= end) return ;
	print_arr(arr, end);
	int min {findMinidx(arr, start, end)};
	int temp {arr[start]}; 
	arr[start] = arr[min];
	arr[min] = temp;
	selSort(arr, start+1, end);

}


int main(){

	int arr[] {1,5,3,2,8,5,9,10};
	int len {sizeof(arr)/sizeof(arr[0])};

	selSort(arr, 0, len);
	
	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';
	return 0;
}
