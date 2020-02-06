#include<iostream>

void print_dec(int n){
	if(n == 0){
		return;
	} else {
		std::cout<<n<<" ";
		print_dec(n-1);
	}
}

void print_inc(int n){
	if(n==0){
		return;
	} else {
		print_inc(n-1);
		std::cout<<n<<" ";
	}
}

int main(){
	print_dec(5);
	std::cout<<'\n';
	print_inc(5);
	std::cout<<'\n';
	return 0;
}
