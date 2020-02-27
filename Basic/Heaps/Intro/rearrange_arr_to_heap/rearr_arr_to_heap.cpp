#include<iostream>

void upheapify(int* arr, int idx){
	if(idx == 0){
		return;
	}

	if(arr[idx]>arr[(idx-1)/2]){
		std::swap(arr[idx], arr[(idx-1)/2]);
		upheapify(arr, (idx-1)/2);
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];

	for(int i=0; i<len; i++){
		std::cin>>arr[i];
		upheapify(arr, i);
	}

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}
