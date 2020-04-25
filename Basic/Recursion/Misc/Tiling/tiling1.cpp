// Given a “2 x n” board and tiles of size “2 x 1”, count the number of ways to tile the gi
// ven board using the 2 x 1 tiles. A tile can either be placed horizontally i.e.,
//  as a 1 x 2 tile or vertically i.e., as 2 x 1 tile. 

#include<iostream>

int tile(int n){
	if(n<0) return 0;
	if(n==0) return 1;
	
	return tile(n-1) + tile(n-2);	
}

int main(){
	int n;
	std::cin>>n;

	std::cout<<tile(n);
	return 0;
}
