//Find smallest and largest value in unsorted array
#include<iostream>
#include<algorithm>
int get_int(){
	int val {};
	std::cin>>val;
	return val;
}


void find_vals(int arr[], int n){
	std::sort(arr, arr+ n);
	std::cout<<"Smallest val"<<"\n";
	std::cout<<arr[0]<<"\n";
	std::cout<<"Largest Val"<<"\n";
	std::cout<<arr[n-1];
}


int main(){
	std::cout<<"Enter number of values"<<"\n";
	int n {get_int()};

	std::cout<<"Enter Array values"<<"\n";
	int arr[100] {};

	for(int i=0; i<n; i++){
		arr[i] =get_int();
	}

	find_vals(arr, n);
	return 0;
}
