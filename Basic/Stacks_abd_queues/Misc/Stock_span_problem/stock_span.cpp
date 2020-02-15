#include<iostream>

int main(){
	int len;
	std::cin>>len;

	int* arr= new int[len];

	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int* f_arr = new int[len];
	
	std::cout<<"Solving"<<'\n';
	for(int i=0; i<len; i++){
		std::cout<<"Loop"<<i<<'\n';
		if(i == 0){
			f_arr[i] =0;
		} else {
			int j;
			for(j=i; j>=0; j--){
				if(arr[j] > arr[i]){
					break;
				}

			}

			f_arr[i] = (i-j);
		}
	}

	for(int i=0; i<len; i++){
		std::cout<<f_arr[i]<<" ";
	}
	std::cout<<'\n';

	return 0;
}

