//Find the missing num from the first N natural numbers in sequence

#include<iostream>

void find_miss(int arr[], int N){
	int total {N*(N+1)/2};
       	int arr_sum {};   	
	for(int i=0; i<N-1; i++){
		arr_sum += arr[i];
	}
	std::cout<<"Missing number: "<<total - arr_sum<<"\n";
}

int main(){
	int N {};
	std::cin>>N;
	
	int arr[100] {};
	// inpur array seq with one missing number
	for(int i=0; i<N-1; i++){
		std::cin>>arr[i];
	}
	
	find_miss(arr, N);
		
	return 0;

}
