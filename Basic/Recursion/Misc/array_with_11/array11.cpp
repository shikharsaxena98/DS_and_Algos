// Count teh number of 11s in an array

#include<iostream>

int count11(int* arr, int len, int idx){
	if(idx == len) return 0;

	if(arr[idx] == 11) return 1 + count11(arr, len, idx+1);

	return count11(arr, len, idx + 1);
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	std::cout<<count11(arr, len, 0)<<'\n';	

	return 0;
}
