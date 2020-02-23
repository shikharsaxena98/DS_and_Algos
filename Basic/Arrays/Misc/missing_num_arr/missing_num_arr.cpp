#include<iostream>

int find_missing(int* arr, int len){
	int sum = 0;
	for(int i=0; i<len-1; i++){
		sum+= arr[i];
	}

	int total = (len)*(len+1)/2;

	return total - sum;
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len-1];
	for(int i=0; i<len-1; i++){
		std::cin>>arr[i];
	}

	std::cout<<"Missing Num: "<<find_missing(arr, len)<<'\n';

	return 0;
}
