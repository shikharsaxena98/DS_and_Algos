#include<iostream>

void quick_zero(int* arr, int len){
	int pivot = 0;
	int i=-1;
	for(int j=0;j<len; j++){
		if(arr[j] < pivot){
			i++;
			std::swap(arr[i], arr[j]);
		}
	}
}

void rearrange(int* arr, int len){
	quick_zero(arr, len);
	int i=0;
	int j= 0;

	for(int k=0; k<len; k++){
                std::cout<<arr[k]<<" ";
        }

	std::cout<<'\n';

	while(arr[i] < 0){
		i++;	
	}
	//i++;

	while(arr[j] < 0 && i<len){
		std::swap(arr[j], arr[i]);
		j+=2;
		i++;
	}

}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	rearrange(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';

	return 0;
}
