#include<iostream>

void printSub(int* arr, int i, int len, int n){
	
	for(int j=i; j<i+n; j++){
		std::cout<<arr[j]<<" ";

	}

	std::cout<<'\n';

}

void getSub(int* arr, int i, int len, int n){
	if(i == len){
		return ;
	}

	printSub(arr, i, len, n);
//	std::cout<<"Calling"<<i<<" "<<n<<'\n';
	getSub(arr, i+1, len, n);
}

int main(){
	int len;
	std::cin>>len;

	int* arr = new int[len];
	for(int i=0; i<len; i++){
		std::cin>>arr[i];	
	}

	int n;
	std::cin>>n;

	getSub(arr, 0, len, n);

	return 0;
}
