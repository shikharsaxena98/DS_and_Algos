#include<iostream>	//std::cout
#include<algorithm>	//std::sort

int main(){
	int arr[5] {10, 5, 6, 79, 30};
	std::sort(arr, arr+5);
	for(int i=0; i<5; i++){
		std::cout<<arr[i]<<"\n";
	}
	return 0;
}

