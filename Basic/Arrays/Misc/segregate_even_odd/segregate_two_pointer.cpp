#include<iostream>

void segregate_even_odd(int* arr, int len){
	int i=0;
	int j= len -1;

	while( i<=j){
		while((arr[i] % 2 == 0) && i<=j){
			i++;
		}

		while((arr[j] % 2 == 1) && (i<= j)){
			j--;
		}

		if(i<=j){
			std::swap(arr[i], arr[j]);
		}

	}
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	segregate_even_odd(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}
