#include<iostream>
#include<algorithm>


//Defining comparator(can be skipped)
bool compare(int a, int b){
	return a>b;
}

int main(){
	int arr[] {1,2 5,3,7,6,8};
	
	std::sort(arr, arr+7, compare);

	for(int i=0; i<7; i++){
		std::cout<<arr[i]<<' ';
	}
	std::cout<<'\n';
	return 0;
}
