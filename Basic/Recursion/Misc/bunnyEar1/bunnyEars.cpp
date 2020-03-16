// Calculate the ears of the bunnies given the number of bunnies

#include<iostream>

int bunnyEars(int n){
	if(n == 0) return 0;

	return 2+bunnyEars(n-1);
}

int main(){
	int n;
	std::cin>>n;

	std::cout<<bunnyEars(n)<<'\n';
	return 0;
}
