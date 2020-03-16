// Check if 6 is present in an array or not
#include<iostream>

bool containsSix(int* arr, int len, int idx){
	if(idx == len) return false;

	if(arr[idx] == 6) return true;

	return containsSix(arr, len, idx+1);
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];	
	}

	containsSix(arr, len ,0)? std::cout<<"true"<<'\n' : std::cout<<"flase\n";

	return 0;
}
