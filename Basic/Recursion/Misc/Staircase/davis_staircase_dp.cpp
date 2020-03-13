#include<iostream>

int memo[1000];
void _init(){
	for(int i=0; i<1000; i++) memo[i] = -1;
}

int findWays(int n){
	for(int i=0; i<10; i++){
		std::cout<<memo[i]<<" ";
	}
	std::cout<<'\n';

	if(n == 0){
		return 1;
	}

	if(memo[n] != -1){
		return memo[n];
	}

	int num1=0;
	int num2=0;
	int num3=0;
	if(n-1 >= 0){
		num1 = findWays(n-1);
		memo[n-1] = num1;
	}
	if(n-2 >= 0){
		num2 = findWays(n-2);
		memo[n-2] = num2;	
	}
	if(n-3 >=0){
		num3 = findWays(n-3); 
		memo[n-3] = num3;
	}

	return num1+num2+num3;
}

int main(){
	int n;
	std::cin>>n;

	_init();

	std::cout<<findWays(n)<<'\n';

	return 0;
}
