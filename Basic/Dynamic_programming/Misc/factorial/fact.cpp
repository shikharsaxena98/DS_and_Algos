#include<iostream>

long long int fact(int n){

	long long int arr[n+1];
	arr[0] = arr[1] =1;
	for(int i=2; i<n+1; i++){
		arr[i] = i*arr[i-1];
	}

	return arr[n];
}

int main() {
	int n;
	std::cin>>n;
	std::cout<<fact(n)<<'\n';
	return 0;
}
