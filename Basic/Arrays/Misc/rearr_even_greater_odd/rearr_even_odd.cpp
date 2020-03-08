// Reaarange such that even idx are greater than odd idx
#include<iostream>
#include<algorithm>

class Solution{
	public:
		void rearrange(int* arr, int len){
			std::sort(arr, arr+len);
			for(int i=0; i<len-1; i=i+2){
				std::swap(arr[i], arr[i+1]);
			}	
		}
};

int main(){
	int len;
	std::cin>>len;

	int* arr =new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}


	Solution sol;
	sol.rearrange(arr, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';
	
	return 0;
}
