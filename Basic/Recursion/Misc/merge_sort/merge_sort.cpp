#include<iostream>

void mergeArr(int* arr, int s, int e){
	int mid = (s+e)/2;
	int i=s;
	int j=mid+1;
	int k =s;

	int temp[100];
	
	while(i<=mid && j<= e){
		if(arr[i] < arr[j]){
			temp[k++] = arr[i++]; 
		} else {
			temp[k++] = arr[j++];
		}
	}

	while(i<=mid){
		temp[k++] = arr[i++];
	}

	while(j<= e){
		temp[k++] = arr[j++];
	}

	for(int i=s; i<= e; i++){
		arr[i] = temp[i];
	}
}

void mergeSort(int* arr,int s, int e){
	//Base case
	if(s>=e){

		return;
	}
	// Divide the array in smaller arrays
	int mid = (s+e)/2;
	
	mergeSort(arr, s, mid);
	mergeSort(arr, mid+1, e);

	//Merge the parts

	mergeArr(arr, s, e);
	//mergeArr(arr, mid +1, e);
	return;
}

int main(){
	int len;
	std::cin>>len;
	
	int* arr = new int[len];

	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	mergeSort(arr,0, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}
