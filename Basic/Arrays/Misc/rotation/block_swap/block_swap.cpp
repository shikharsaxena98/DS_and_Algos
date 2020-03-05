#include<iostream>

void block_swap(int* arr, int s1, int s2, int k){
	for(int i=0;i<k; i++ ){
		std::swap(arr[s1+i], arr[s2+i]);
	}
}

void left_rot(int* arr, int len, int k){
	if(k ==0 || len == k){
		return;	
	}

	if(len -k == k){
		block_swap(arr, 0, k, k);
		return;
	}

	if(len - k > k){
		block_swap(arr, 0, len-k, k);
		left_rot(arr, len - k, k);
	}

	if(len - k < k){
		block_swap(arr, 0, k, )
	}


}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0;i<len; i++){
		std::cin>>arr[len];
	}

	int k;
	std::cin>>k;
	
	block_swap(arr, )

	return 0;
}
