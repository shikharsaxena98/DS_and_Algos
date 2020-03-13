#include<iostream>
#include<stack>

void nge(int* arr, int len){
	std::stack<int> s;

	s.push(arr[0]);
	for(int i=0; i<len; i++){
		
	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0 ;i<len; i++){
		std::cin>>arr[i];
	}

	nge(arr, len);

	return 0;
}
