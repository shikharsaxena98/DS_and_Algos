#include<iostream>

void merge(int* arr1, int* arr2, int* arr_f, int len1, int len2){
	int fl = len1+ len2;
	int i=0;
	int k=0;
	int j=0;
	while(k<len1 && j<len2){
		if(arr1[k] > arr2[j]){
			arr_f[i++] = arr2[j++];
		} else {
			arr_f[i++] = arr1[k++];
		}
	}

	//int l = len1 > len2 ? len1:len2;

	while(k<len1){
		arr_f[i++] = arr1[k++];	
	}	

	while(j<len2){
		arr_f[i++] = arr2[j++];
	}
}

int main(){
	int len1;
	std::cin>>len1;

	int len2;
	std::cin>>len2;

	int* arr = new int[len1];
	int* arr2 = new int[len2];

	for(int i=0; i<len1; i++){
		std::cin>>arr[i]; 
	}

	for(int i=0; i<len2; i++){
		std::cin>>arr2[i];
	}

	int* arr_f = new int[len1+len2];

	merge(arr, arr2, arr_f, len1, len2);
	
	for(int i=0; i<len1+len2; i++){
		std::cout<<arr_f[i]<<" ";
	}

	std::cout<<'\n';
	return 0;
}
