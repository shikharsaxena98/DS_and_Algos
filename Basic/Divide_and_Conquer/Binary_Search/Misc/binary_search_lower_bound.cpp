#include <iostream>

int bs_lb(int* arr, int len, int val){
    int s {0};
    int e {len-1};
    int ans {-1};

    while(s<=e){
        int mid {(s+e)/2};

        if(arr[mid]==val){
            e = mid-1;
            ans= mid;
        } else if(arr[mid] > val){
            e = mid-1;
        } else {
            s = mid+1;
        }

    }

    return ans;

}
int main() {
    int arr [] = {1,2,2,2,2,3,4,4,8};
    int len {9};
    int val {2};
    std::cout<<bs_lb(arr, len, val)<<'\n';
    return 0;
}

