// Arrange arr accoridnd to idx in O(n)

#include<iostream>

void arrange(int* arr, int* idx, int len){
	int temp[len];
	for(int i=0; i<len; i++){
		temp[idx[i]] = arr[i];
	}

	for(int i=0; i<len; i++){
		arr[i] = temp[i];
		idx[i] = i;
	}

}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int* idx = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>idx[i];
	}

	arrange(arr, idx, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" "<<idx[i]<<'\n';
	}

	return 0;
}
