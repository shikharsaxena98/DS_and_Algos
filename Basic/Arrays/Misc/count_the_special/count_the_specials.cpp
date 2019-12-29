#include<iostream>
#include<cmath>

int count(int* arr, int sizeof_array, int k){
	int val {0};
	for(int i=0; i<sizeof_array; i++){
		int count {0};
		for(int j=0; j<sizeof_array; j++){
			// count will be always atleast 1
			if(arr[i] == arr[j])
				count++;
		}
	
		if(count == std::floor(sizeof_array/k))
			val++;
		
	}
	
	val /= std::floor(sizeof_array/k);

	std::cout<<val<<"\n";
	return 0;
}


int main(){
	int arr[] {1, 4, 1, 2, 4};
	int len {sizeof(arr)/sizeof(arr[0])};

	count(arr, len, 2);

	return 0;
}
