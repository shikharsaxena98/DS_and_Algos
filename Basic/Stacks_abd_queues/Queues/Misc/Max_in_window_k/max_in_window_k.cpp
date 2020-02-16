// Find max element in a window of size k in an array

#include<iostream>
#include<stack>

void getMaxArray(int* arr, int len, int k){
	std::stack<int> s;
	int f_arr[len-k] {0};
	int val=0;
	for(int i=0; i<k; i++){
		if(arr[i] > arr[val]){
			val =i;
		}
	}
	
	f_arr[0] = val;
	s.push(val);

	for(int i=k ; i<len; i++){

		if(arr[s.top()] > arr[i]){
			f_arr[i-k+1] = s.top();
		} else {
			s.pop();
			f_arr[i-k+1] = i;
			s.push(i);
		}
	}

	for(int i=0; i<=len-k; i++){
		std::cout<<f_arr[i]<<' ';
	}

	std::cout<<'\n';
}

int main(){
	int arr[] = {1,2,3,1,2,1,2,3,6};
	int len = 9;
	int k=3;

	getMaxArray(arr, len, k);

	return 0;
}


