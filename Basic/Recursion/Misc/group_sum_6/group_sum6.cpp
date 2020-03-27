#include<iostream>

bool gs_six(int idx, int* arr, int len, int val){
	if(idx>len) return false;;
	if(val == 0) return true;

	if(arr[idx] == 6) return gs_six(idx+1, arr, len, val - 6);

	if(gs_six(idx+1, arr, len, val)) return true;
	if(gs_six(idx+1, arr, len, val - arr[idx])) return true;

	return false;
}

int main(){
	int len;
	std::cin>>len;

	int* arr =new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int val;
	std::cin>>val;

	std::cout<<gs_six(0, arr, len, val);
	return 0;

}
