//Given an array of integers of size n. Assume ‘0’ as invalid number and all other as 
//valid number. Convert the array in such a way that if next number is a valid number 
//and same as current number, double its value and replace the next number with 0. 
//After the modification, rearrange the array such that all 0’s are shifted to the end. 

#include<iostream>
//#include<unordered_map>

void drm_rearrange(int* arr, int len){
	for(int i=1; i<len; i++){
		if(arr[i] == arr[i-1]){
			arr[i-1] = arr[i-1] * 2;
			arr[i] =0; 
		}
	}

	int i= len;
	for(int j=len-1; j>=0; j--){
		if(arr[j] == 0){
			i--;
			std::swap(arr[j], arr[i]);
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

	drm_rearrange(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';


	return 0;
}

