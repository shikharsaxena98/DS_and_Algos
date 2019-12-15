//Check for dupicate entry in an array

#include<iostream>

int get_int(){
	int val {};
	std::cin>>val;
	return val;
}

void check_dup(int arr[], int n){
	int count {};
	for(int i=0 ;i< n; i++){
		for(int j=i+1; j<n;j++ ){
			if(arr[i] == arr[j]){
				if(count ==0)
					std::cout<<"Duplicate Values"<<"\n";
				
				std::cout<< arr[i]<<"\n";
				count += 1;
			}
		}
	}
	std::cout<<"Count of duplicate values: "<<count<<"\n";
}

int main(){
	std::cout<<"Enter number of values"<<"\n";
	int  n {get_int()};
	std::cout<<"Enter ARRAY values one by one"<<"\n";
	int arr [100] {};
	for(int i=0; i<n; i++){
		arr[i] = get_int();
	}
	
	check_dup(arr, n);

	return 0;
}
