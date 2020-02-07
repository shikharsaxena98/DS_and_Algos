#include<iostream>

int binSearch(int* arr, int high, int low, int key){
	int mid = (high + low)/2;
	
	if(high < low){
		return -1;
	}

	if(arr[mid] == key){
		return mid;
	} else if(arr[mid] > key){
		binSearch(arr, mid-1, low, key);
	} else if(arr[mid] < key){
		binSearch(arr, high, mid+1, key);
	}

}

int main(){
	int arr[] {1,2,3,4,5,6,7,8};

	int len {8};
	
	int key;
	std::cin>>key;

	std::cout<<binSearch(arr, 7, 0, key)<<'\n';
	return 0;
}
