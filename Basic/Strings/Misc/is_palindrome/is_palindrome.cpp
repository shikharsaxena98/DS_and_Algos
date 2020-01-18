// Given an array of numbers find if the array is a palindrome

#include<iostream>

bool isPal(int* arr, int len){

	bool val=true;
	
	for(int j=0;j<len/2;j++){
		if(arr[j] != arr[len-j-1]){
			val=false;
		}
	}
	//std::cout<<val<<'\n';

	return val;

}

int main(){
	int len {};
	std::cin>>len;
	
	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	if(isPal(arr, len)){
		std::cout<<"true"<<'\n';
	} else {
		std::cout<<"false"<<'\n';
	}


	delete arr;
	return 0;
}
