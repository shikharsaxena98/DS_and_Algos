// Pointer operations **Important**

#include<iostream>
int main(){
	int a[] = {10, 20, 30, 40, 50};
	int *p[] = {a, a+1, a+2, a+3, a+4, a+5};

	int **q=p;

	**q++;
	std::cout<<*a<<" "<<**p<<" "<<**q<<'\n';

	q=p;

	++**q;
	std::cout<<*a<<" "<<**p<<" "<<**q<<'\n';
	return 0;
}
