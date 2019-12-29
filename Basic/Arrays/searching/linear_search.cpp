#include<iostream>

int lin_search(int* arr,int len, int val){
	int idx {-1};
	for(int i=0; i<len; i++){
		if(arr[i] == val)
			idx = i;
	}

	if(idx == -1){
		std::cout<<"Value not present"<<"\n";
		return -1;
	} else 
		return idx;

}

int main(){
	int arr[] {1,2,3,56,7,33,4544,6,4,90,23,10};
	int len {sizeof(arr)/sizeof(arr[0])};
	int val {};
	std::cin>>val;
	int idx {lin_search(arr, len, val)};
	std::cout<<"Val: "<<val<<" at idx: "<<idx<<"\n";
	return 0;
}
