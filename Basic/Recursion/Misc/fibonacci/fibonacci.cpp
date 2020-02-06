// Find nth term of fibonacci series

#include<iostream>

int fib(int n){
	if(n == 1){
		return 0;
	} else if(n == 2){
		return 1;
	} else{
		return fib(n-2) + fib(n-1);
	}
}

int main(){
	std::cout<<"Enter n\n";
	
	int n;
	std::cin>>n;

	std::cout<<fib(n)<<'\n';

	return 0;
}
