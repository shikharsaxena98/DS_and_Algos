#include <iostream>

void swap(int* ptr1, int* ptr2){
        int temp {*ptr1};
        *ptr1 = *ptr2;
        *ptr2 = temp;
}

int* just_next(int* arr, int len){
	int i=0;
        for(i=len-1;i>0;i--){
                if(arr[i]>arr[i-1]){
                        swap(arr+i, arr+(i-1));
                        break;
                }
        }

        for(int j=len-1; j>i; j--){
                if(arr[j]<arr[j-1]){
                        swap(arr+j, arr+(j-1));
                        break;
                }
        }
        return arr;
}


int main() {
	// your code goes here
	int t {0};
	std::cin>>t;
	int len {};
	for(int i=0; i<t; i++){
		std::cin>>len;
		int* arr = new int[len] {};
		for(int i=0; i<len; i++){
                std::cin>>arr[i];
        }

        int* arr_n;
        arr_n = just_next(arr, len);
        for(int i=0; i<len; i++){
                std::cout<<arr_n[i]<<' ';
        }
        std::cout<<'\n';

        delete arr;
        
	}
	
	return  0;
}
