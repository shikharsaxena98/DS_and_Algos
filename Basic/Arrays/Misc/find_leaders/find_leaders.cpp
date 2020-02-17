// Given an array of positive integers. Your task is to find the leaders in the array.
//Note: An element of array is leader if it is greater than or equal to all the elements
// to its right side. Also, the rightmost element is always a leader. 

#include<iostream>

void findLeaders(int* arr, int len){
    int sum {0};
    int* f_arr = new int[len] {0};
    int i;
    for(i=0; i<len-1; i++){
        sum =0;
        for(int j=i+1; j<len; j++){
            sum += arr[j];
        }

        if(arr[i] >= sum){
            f_arr[i] = arr[i];
        }
    }
    
    for(i=0; i<len; i++){
                if(f_arr[i] != 0){
                std::cout<<f_arr[i]<<" ";
                } else {
                    break;

                }
            }
}

int main() {
    int test;
    std::cin>>test;

    while(test >0){
	    int len;
	    std::cin>>len;

	    int* arr = new int[len];
	    for(int i=0; i<len; i++){
	        std::cin>>arr[i];
	    }

	    findLeaders(arr, len);

	    std::cout<<'\n';
	    test--;
    }

	return 0;
}
