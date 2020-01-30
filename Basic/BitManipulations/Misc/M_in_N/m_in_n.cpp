// Replace i to j bits in the number N with M

#include<iostream>

void clearBitsRange(int &num, int i, int j){
	int ones = ~(0);
	int a = ones<<(j+1);
	int b = (1<<i) -1;
	int mask = a | b;

	num = num & mask;
}

void replace(int &n, int m, int i, int j){
	clearBitsRange(n, i, j);
	m = m <<i;
	n = n | m;
}

int main(){
	int n = 37;
	int m = 7;

	replace(n , m, 1, 3);

	std::cout<<n<<'\n';

	return 0;
}
