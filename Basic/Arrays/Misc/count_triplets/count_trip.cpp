#include<iostream>
#include<algorithm>

int count(int* arr, int len){
	int cnt {0};
	
	int* ptr = arr;
	int* ptr2 = arr+2;

	for(int i=2; i<len; i++){
		std::cout<<*(ptr)<<"   "<< *(ptr+1)<<"   "<<*ptr2<<'\n';
		if(*(ptr) + *(ptr+1) == *ptr2){
			cnt++;
		}

		ptr++;
		ptr2++;
	}

	return cnt;
}


int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];
	}

	std::sort(arr, arr+len);

	std::cout<<count(arr, len)<<'\n';

	return 0;
}
