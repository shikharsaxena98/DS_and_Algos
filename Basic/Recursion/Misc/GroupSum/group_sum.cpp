#include<iostream>

bool groupSum(int idx, int * arr, int len, int val){
	std::cout<<"val :    "<<val<<"idx:   "<<idx<<'\n';

	if(idx >len) return false;
	if(val == 0) return true;
	
 	return (groupSum(idx+1, arr, len, val)) || (groupSum(idx+1, arr, len, val - arr[idx]));
}

int main(){
	int len;
	std::cin>>len;
	int* arr =new int[len];
	for(int i=0; i<len; i++){
		std::cin>> arr[i];
	}

	int val;
	std::cin>>val;

	std::cout<<groupSum(0, arr,len, val)<<'\n';
	return 0;
}
