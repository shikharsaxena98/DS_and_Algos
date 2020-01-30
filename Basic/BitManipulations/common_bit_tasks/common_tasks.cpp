#include<iostream>

int getBit(int n, int i){
	int mask = (1<<i);
	int bit = (mask&n) >0 ? 1:0;
	return bit;
}

int setBit(int n, int i){
	int mask = (1<<i);
	int val = (n | mask);
	return val;
}

void clearBit(int* n, int i){
	int mask = ~(1<<i);
	*n = ((*n) & mask);
}

void clearBitsRange(int &n, int i, int j){
	int ones = ~(0);
	int a = ones<<(j+1);
	int b = 1<<(i) -1;
       	int mask = a|b;

	n = n & mask;
}



int main(){
	std::cout<<getBit(11, 0)<<'\n';
	
	int num {15};
	clearBit(&num, 1);		//Expected 13
	std::cout<<num<<'\n';

	int num1 = 37;
	clearBitsRange(num1, 1, 3);	// Expected 33
	std::cout<<num1<<'\n';
	return 0;
}
