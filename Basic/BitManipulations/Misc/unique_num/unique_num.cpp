#include<iostream>

int find_uniq(int* arr, int len){
	int num {arr[0]};
	for(int i=1; i<len; i++){
		num = arr[i] ^ num;
	}

	return num;
}

int main(){
	int arr [] {1,2,1,5,5,3,3};

	std::cout<<find_uniq(arr, 7)<<'\n';
	return 0;
}
