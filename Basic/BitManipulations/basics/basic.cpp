#include<iostream>

int main(){
	int x= 5;
	int y= 7;

	std::cout<<(x & y)<<'\n'; //AND of 5 and 7

	std::cout<<(x | y)<<'\n'; //OR of 5 and 7

	std::cout<<(x << 1)<<'\n'; // Left shift bitwise: a<<b equivalent to a*(2^b) and right shift is division

	std::cout<<(x ^ y)<<'\n'; // XOR
	return 0;
}
