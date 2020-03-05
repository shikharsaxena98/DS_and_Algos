#include<iostream>

int findMin(int* arr, int s, int e){
	if(s>e){
		return -1;
	}

	int mid = (s+e)/2;

	if((mid > s) && (arr[mid] < arr[mid -1])){
		return mid;
	}

	if((mid < e) && (arr[mid] > arr[mid+1])){
		return mid+1;
	}

	if(arr[mid] > arr[0]){
		return findMin(arr, mid+1, e);
	} else {
		return findMin(arr, s, mid-1);
	}
	
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int idx = findMin(arr, 0, len);
	std::cout<<idx<<"   "<<arr[idx]<<'\n';
	return 0;

}
