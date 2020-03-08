#include<iostream>
#include<algorithm>

void rearrange(int* arr, int len){
	int idx = 0;
	int temp[len];

	int i = 0;
	int j = len-1;

	std::sort(arr, arr+len);
	for(int idx = 0; idx<len; idx++){
		if(idx%2 == 0)
		temp[idx] = arr[i++];
		else {
			temp[idx] = arr[j--];
		}	
	}

	for(int i=0; i<len; i++){
		arr[i] = temp[i];
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
