#include<iostream>

int binsearch(int* arr, int s, int e, int k){
	//int mid = (s+e)/2;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] == k){
			return mid;
		}

		if(arr[mid] > k){
			e = mid-1;
		} else if(arr[mid] < k){
			s = mid+1;
		}

	}

	return -1;
}

int search(int* arr, int len, int k){
	int pivot;
	for(int i=0; i<len-1; i++){
		if(arr[i+1] < arr[i]){
			pivot = i+1;
		}
	}
	std::cout<<"           "<<pivot<<'\n';

	int idx {0};
	if(arr[0] == k) return 0;
	if(arr[0] < k){
		idx = binsearch(arr, 0, pivot, k);
	} else {
		idx = binsearch(arr, pivot, len, k);
	}

	return idx;
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int k;
	std::cin>>k;

	int idx = search(arr, len, k);
	std::cout<<"Index: "<<idx<<" for value: "<<k<<'\n';

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}
