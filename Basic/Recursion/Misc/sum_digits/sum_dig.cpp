// given a number return the sum of all its digits

#include<iostream>

int sum_dig(int n){
	if(n<=9){
		return n;
	}

	return sum_dig(n/10) + n%10; 
}

int main(){
	int n;
	std::cin>>n;

	std::cout<<sum_dig(n)<<'\n';
	return 0;
}
