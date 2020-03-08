// Rearrange positive and negative numbers using inbuilt sort function. 
// The order of appearance should be maintained.

#include<iostream>
#include<algorithm>

bool comp(int a, int b){
	if(a<=0 && b>=0){
		return true;
	}

	return false;
}

void rearrange(int* arr, int len){
	std::sort(arr, arr+len, comp);
}

int main(){
	int len;
	std::cin>>len;

	int* arr =new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	rearrange(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}
