#include<iostream>

int main(){
	int len;
	std::cin>>len;

	int* arr=  new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int count= 0;
	for(int i=0; i<len; i++){
		if(arr[i] != 0){
//			std::cout<<arr[i]<<'\n';
			arr[count++] = arr[i];
		}
	}
	
//	std::cout<<'\n';

	for(int i=count; i<len; i++){

		arr[i] = 0;
	}
	//std::cout<<'\n';	
	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;

}
