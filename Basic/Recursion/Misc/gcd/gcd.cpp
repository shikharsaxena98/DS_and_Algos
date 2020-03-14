#include<iostream>

int gcd(int a, int b){
	if(a%b == 0){
		return b;
	}

	return gcd(b, a%b);
}

int main(){
	int test;
	std::cin>>test;

	while(test--){
		int a;
		std::cin>>a;

		int b;
		std::cin>>b;
		int val =gcd(a, b);
		std::cout<<val<<'\n';

	}

	return 0;
}
