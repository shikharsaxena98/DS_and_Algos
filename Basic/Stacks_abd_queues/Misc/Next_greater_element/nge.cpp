#include<iostream>
#include<stack>

void nge_arr(int* arr, int len){
	std::stack<int> s;
	//int max = arr[len-1];
	//
	for(int i=0; i<len; i++){
		int j=i+1;
		while(arr[j] < arr[i]){
			j++;
		}
		
		if(j<len){
			std::cout<<arr[j]<<" ";
		} else {
			std::cout<<-1<<" ";
		}
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr= new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	nge_arr(arr, len);

	return 0;
}
