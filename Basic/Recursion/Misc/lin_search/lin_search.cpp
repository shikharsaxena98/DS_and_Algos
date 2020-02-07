#include<iostream>

int linSearch(int* arr, int len, int val){
	if(len == 0){
		return -1;
	} else if(arr[len-1] == val){
		return len-1;	
	} else {
		return (linSearch(arr, len-1, val));
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0 ; i<len;i++){
		std::cin>>arr[i];
	}

	int val;
	std::cin>>val;

	std::cout<<linSearch(arr, len, val)<<'\n';
	
	return 0;
}
