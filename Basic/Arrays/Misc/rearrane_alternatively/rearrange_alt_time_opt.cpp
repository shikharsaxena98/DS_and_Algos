#include<iostream>

int* rearrange(int* arr, int len){
	int* arr_f = new int[len];
	int* ptr1 = arr;
	int* ptr2 = arr+(len-1);

	for(int i=0; i<len; i++){
		if(i%2 == 0){
			arr_f[i] = *ptr2;
		       ptr2--;	
		} else {
			arr_f[i] = *ptr1;
			ptr1++;
		}
	}

	return arr_f;

}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	arr= rearrange(arr, len);

	for(int i=0; i<len; i++){
                std::cout<<arr[i]<<" ";
        }

	return 0;
}


