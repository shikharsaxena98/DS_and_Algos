#include<iostream>

void insertionSort(int* arr, int len){
	
	for(int i=1;i<len; i++){
		int key {arr[i]};
		int j {i-1};
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1] = key;
	}

	return;
}

int main(){
	int arr[] = {5, 3, 1, 2, 7, 6};
	int len {sizeof(arr)/sizeof(arr[0])};

	insertionSort(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';
	
	return 0;
}
