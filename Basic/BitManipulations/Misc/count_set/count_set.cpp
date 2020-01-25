// Count the number of ones in the binary rep of a number

#include<iostream>
int countOnes(int n){
	int mask = 1;
	int count = 0;
	while(n!=0){
		if((mask & n) != 0) count++;
		n=n>>1;
	}
	return count;
}
int main() {
	int num {0};
	std::cin>>num;
	std::cout<<countOnes(num)<<'\n';
	return 0;
}
