// Complexity : O(n)
// Find the odd and even numbers
#include<iostream>

void count_odd_even(int* arr, int len, int* num_odd, int* num_even){
	*num_odd = 0;
	*num_even = 0;

	for(int i=0;i<len; i++){
		if(arr[i]%2 == 0)
			*num_even= *num_even+1;
		else
			*num_odd= *num_odd+1;
	}
}

int main(){
	
	int arr[] {1,2,45,7,8,54,26,78, 5, 55};
	int len {sizeof(arr)/sizeof(arr[0])};
	
	int num_odd, num_even;
	count_odd_even(arr, len, &num_odd, &num_even);

	std::cout<<"Odd: "<<num_odd<<"\t Even: "<<num_even<<"\n";
	return 0;
}
