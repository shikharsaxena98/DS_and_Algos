// Given an array of ints, compute recursively if the array contains somewhere 
// a value followed in the array by that value times 10

#include<iostream>

bool tenTimes(int* arr, int len, int idx){
	if(idx == len -1) return false;

	if(arr[idx] == arr[idx+1]/10) return true;

	return tenTimes(arr, len, idx+1);
}
	
int main(){
	int len;
	std::cin>>len;

	int* arr =new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	tenTimes(arr, len,0 ) ? std::cout<<"true\n" : std::cout<<"flase\n";
	return 0;
}
