#include<iostream>

//Only for a sorted array

int bin_search(int* arr, int len, int val){
	int idx {-1};
	int high {len};
	int low {0};

	while(low <= high){
		int mid {( high + low)/2};
		if(arr[mid] == val)
			return mid;
		else if(arr[mid]<val)
			low = mid+1;
		else 
			high = mid-1;
	
	}
	std::cout<<"value not found"<<"\n";

	return idx;
}

int main(){
	int arr[] {1,2,3,4,5,6,7,85};
	int len {sizeof(arr)/sizeof(arr[0])};

	int val {};
	std::cin>>val;

	std::cout<<"Index of val:"<<val<<" is: "<<bin_search(arr, len, val)<<"\n";
	
	return 0;	
}
