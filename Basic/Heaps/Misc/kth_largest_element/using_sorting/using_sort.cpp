#include<iostream>

void bubble(int* arr, int len, int k){
	for(int j=0; j<k; j++){
		//std::cout<<"j: "<<j<<'\n';
		for(int i=0; i<len-1; i++){
		//	std::cout<<arr[i]<<"   "<<arr[i+1]<<'\n';
			if(arr[i] > arr[i+1]){
			std::swap(arr[i], arr[i+1]);
			}
		}
	}

//	for(int i= len-1; i>=len-k ; i--){
//                std::cout<<arr[i]<<" ";
//        }
//	std::cout<<'\n';

}

void findk(int* arr, int len, int k){
	bubble(arr, len, k);
	for(int i= len-1; i>len-k-1 ; i--){
		std::cout<<arr[i]<<" ";
	}
}

int main(){
	int len;
	std::cin>>len;

	int k;
	std::cin>>k;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	findk(arr, len , k);

	return 0;
}
