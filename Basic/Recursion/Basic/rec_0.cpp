#include<iostream>

void print_hello(int count){
	if(count<1){
		std::cout<<"Hello"<<"\n";
	} else {
		print_hello(--count);
		std::cout<<"Count: "<<count<<'\n';
	}
}

int main(){
	
	print_hello(5);
}
