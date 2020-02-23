// Given a positive array of sorted integer, rearrange such that first element is max , second is min, third is second max...

#include<iostream>
#include<algorithm>

void rearrange(int* arr, int len){
	int i=0;
	while(i<len){
		std::reverse(arr+i, arr+len);
		i++;
	}	
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	// Sorted array input
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}


	rearrange(arr, len);

	for(int i=0; i<len; i++){
                std::cout<<arr[i]<<" ";
        }

	return 0;
}
