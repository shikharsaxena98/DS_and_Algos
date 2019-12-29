#include<iostream>
void traverse(int* arr, int len){
	for(int i=0; i<len;i++){
		std::cout<<arr[i]<<"\n";
	}
}

int* arr_part(int* arr, int i,int j){
	int* sub_arr {new int[j-i] {}};

	for(int z=0; z<j-i; z++){
		sub_arr[z] = arr[z+i];
	}

	return  sub_arr;
}

int main(){
	int arr[] {1,2,3,4,5,6,7,8,9,10};
	
	int i;
	int j;
	std::cin>>i>>j;

       	int* sub_arr;

	sub_arr = arr_part(arr, i, j);
	traverse(sub_arr, j-i);

	return 0;
}
