#include<iostream>
#include<stack>

int find_second_largest(int* arr, int len){
	std::stack<int> s;
	
	//s.push(arr[0]);
	if(arr[1] > arr[0]){
		s.push(arr[1]);
		s.push(arr[0]);
	} else {
		s.push(arr[0]);
		s.push(arr[1]);
	}

	for(int i=1; i<len; i++){
		if(arr[i] > s.top()){
			s.pop();
			if(arr[i] > s.top()){
				int temp =s.top();
				s.pop();
				s.push(arr[i]);
				s.push(temp);
			} else {
				s.push(arr[i]);
			}
		}
	}

	return s.top();
}

int main(){
	int arr[] {7,5,1,3,8,0,10,11,54,21};
	int len = sizeof(arr)/sizeof(int);

	int val = find_second_largest(arr, len);
	// Should print 21 
	std::cout<<"Second Highest : "<<val<<'\n';

	return 0;
}
