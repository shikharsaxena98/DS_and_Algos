#include<iostream>

void mergeArr(int* arr, int s, int e){
	int mid = (s+e)/2
	int i=s;
	int j=mid+1;
	int k =s;

}

void mergeSort(int* arr,int s, int e){
	//Base case
	if(s==e){
		return 0;
	}
	
	int mid = (s+len)/2;
	
	mergeSort(arr, s, mid);
	mergeSort(arr, mid+1, len);

	mergeArr();
}

int main(){
	int len;
	std::cin>>len;

	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	mergeSort(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}
