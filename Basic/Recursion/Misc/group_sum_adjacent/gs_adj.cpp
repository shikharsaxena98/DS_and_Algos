#include<iostream>

bool gs_adj(int idx, int* arr, int len, int val){
	if(val == 0 ) return true;

	if(idx>=len) return false;

	if(gs_adj(idx+2, arr, len, val-arr[idx])) return true;

	if(gs_adj(idx+1, arr, len, val)) return true;

	return false;
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i = 0; i<len ; i++){
		std::cin>>arr[i];
	}

	int val;
	std::cin>>val;

	std::cout<<gs_adj(0, arr, len, val);
	return 0;
}
