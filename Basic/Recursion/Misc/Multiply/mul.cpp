#include<iostream>

int mul(int a, int b){
	if(b==1){
		return a;
	} else {
		return a+mul(a, b-1);
	} 
}

int main(){
	int a, b;
	std::cin>>a>>b;

	std::cout<<mul(a, b)<<'\n';
	return 0;
}
