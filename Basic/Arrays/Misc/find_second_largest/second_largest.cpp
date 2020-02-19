#include<iostream>

int main(){

	int arr[] {4,2,7,1,9,10,32,87,56,11};
	int len = sizeof(arr)/ sizeof(int);

	int* max=arr;
	int* max2=arr+1;
	
	for(int i=2; i<len; i++){
//		std::cout<<"Entered loop:"<<i<<'\n';
		if(arr[i] > *max2){
			if(arr[i] > *max){
				*max2 = *max;
				*max = arr[i];
			} else {
				*max2 = arr[i];
			}
		}
	}
// SShould print 56
	std::cout<<"2nd Max : "<<*max2<<'\n';
	
	return 0;
}
