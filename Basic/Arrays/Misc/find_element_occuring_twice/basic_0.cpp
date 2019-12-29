#include<iostream>
//Find the element that occurs once while others exist twice
//Basic traversing

int check_elements(int* arr, int n){
	for(int i=0; i<n; i++){
		int count =0;
		
		for(int j=0;j<n;j++){
			if(i!=j){
				if(arr[i] == arr[j]){
					count ++;
				}

			}
		}

		if(count == 0){
			return arr[i];
			
		}
	}
	std::cout<<"No element occurs only once"<<"\n";
	return 0;
}


int main(){
	int len;
	int* arr {new int[len]};
	std::cin>>len;
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int val = check_elements(arr, len);
	std::cout<<val<<std::endl;

	delete arr;
	arr = NULL;
	
	return 0;
}
