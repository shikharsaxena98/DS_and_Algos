// Find first and last occurence of target value
#include<iostream>
int main() {
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	int q;
	std::cin>>q;

	while(q){
		int val;
		std::cin>>val;
		int sidx =-1;
		int eidx = -1;
		for(int i=0; i<len; i++){
			if((arr[i] == val) && sidx ==-1){

				sidx=i;
			}

			if(arr[i+1] != arr[i] && arr[i] == val){
				eidx= i;

			}
		}
		std::cout<<sidx<<" "<<eidx<<'\n';
		q--;
	}

	return 0;
}
