#include<iostream>
#include<stack>

void getSpan(int* arr, int len){
	int f_arr[len] {};

	std::stack<int> s;

	f_arr[0] =0;
	for(int i=1; i<len; i++){
		while(!s.empty() && arr[s.top()] < arr[i] ){
			s.pop();
		}

		
		int day_better = s.empty()?0: s.top();

		f_arr[i] = i - day_better;
		s.push(i);

	}

	for(int i=0; i<len; i++){
		std::cout<<f_arr[i]<<" ";
	}
	std::cout<<'\n';
}



int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	getSpan(arr, len);

	return 0;
}
