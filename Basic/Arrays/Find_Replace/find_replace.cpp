#include<iostream>
#include<algorithm>
int main(){
	int arr[] {1,2,3,4,5,1,2,3,67,5,1,1};
	std::replace(arr, arr+12, 1, 90);
	for(int i=0; i<12;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

}
