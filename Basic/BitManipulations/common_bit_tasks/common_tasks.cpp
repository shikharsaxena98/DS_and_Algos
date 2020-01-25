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

int clearBit(int* n, int i){
	int val = (&n);
	int mask = ~(1<<i);
	int
}

int main(){
	std::cout<<getBit(11, 0)<<'\n';
	return 0;
}
