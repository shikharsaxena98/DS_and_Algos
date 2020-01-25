#include <iostream>

int binary_search(int* arr, int len, int val){
    int s {0};
    int e {len-1};
    while(s<=e){
        int mid {(s+e)/2};
        if(arr[mid] == val){
            return mid;
        } else if(arr[mid] > val){
            e = mid-1;
        } else {
            s = mid+1;
        }

    }

    return -1;
}

int main() {
    int arr [] = {1, 3, 5, 10, 12, 15, 17};
    int len = 7;
    int val = 17;
    std::cout<<binary_search(arr, len, val)<<'\n';
    
}

