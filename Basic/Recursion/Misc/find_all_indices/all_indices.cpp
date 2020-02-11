#include<iostream>

void findIdx(int* arr, int* farr, int idx, int len, int val){
	if(idx == len){
		return;
	}

	if(arr[idx] == val){
		*farr = idx;
		farr += 1;
	} 

	findIdx(arr, farr, idx+1, len, val);
}

int main() {
	int len;
	std::cin>>len;

	int* farr = new int[len] {0};
	int* arr = new int[len];

	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}
	int val;
	std::cin>>val;

	findIdx(arr, farr, 0, len, val);

	for(int i=0; i<len; i++){
		if(i !=0 && farr[i] == 0){
			break;
		}
		std::cout<<farr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}
