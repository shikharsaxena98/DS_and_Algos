#include<iostream>

void getSum(int* arr, int len, int i){
	
}

void findSumSub(int* arr, int len, int i){
	if(i == len -1){
		std::cout<<arr[i]<<'\n';
	}

	getSum(arr, len, i);
	findSumSub(arr, len, i+1);

}

int main(){
	int len;
	std::cin>>len;

	int* arr= new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	findSumSub(arr, len, 0);
	return 0;
}
