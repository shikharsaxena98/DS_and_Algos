#include<iostream>

void rearrange(int* arr, int len){
	int temp[3] {0};
	
	for(int i=0; i<len; i++){
		temp[arr[i]]++;
	}
	
	int k=0;
	for(int i=0; i<3; i++){
		int j= i;
		while(temp[j] != 0){
			arr[k++] = j;
			temp[j]--;
		}
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
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
