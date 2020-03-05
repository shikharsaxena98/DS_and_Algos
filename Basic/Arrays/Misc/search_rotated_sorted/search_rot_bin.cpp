#include<iostream>

int search(int* arr, int s, int e, int k){
	if(s>=e){
		return -1;
	}

	int mid = (s+e)/2;
	if(arr[mid] == k) return mid;

	//Right is sorted
	if(arr[mid] < arr[e-1]){
		if(arr[mid] < k && arr[e-1] >= k){
			return search(arr, mid+1, e, k);
		}

		return search(arr, s, mid-1, k);

	} else {
		if(arr[s] <= k && arr[mid] > k){
			return search(arr, s, mid-1, k);
		}

		return search(arr, mid+1, e, k);
	}
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

	int idx = search(arr, 0, len, k);

	for(int i=0; i<len; i++){
                std::cout<<arr[i]<<" ";
        }
	std::cout<<'\n'<<idx<<'\n';

	return 0;
}
