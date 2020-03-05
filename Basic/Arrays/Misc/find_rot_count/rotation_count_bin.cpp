#include<iostream>

int countRot(int* arr, int s, int e){
	if(s>e){
		return -1;
	}

	int mid = (s+e)/2;

	if(arr[mid] > arr[mid+1]) return mid+1;

	if(arr[mid] < arr[mid - 1]) return mid;

	if(arr[mid] <arr[e]){
		return countRot(arr, s, mid-1);
	} else {
		return countRot(arr, mid+1, e);
	}

}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int rot_count = countRot(arr, 0, len);
	
	std::cout<<rot_count<<'\n';
	return 0;
}
