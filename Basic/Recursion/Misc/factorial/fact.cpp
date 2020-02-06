#include<iostream>

int fact(int n){
	if(n == 0){
		return 1;
	} else{
		return n*fact(n-1);
	}

}

int main(){
	int val {0};
	std::cin>>val;
	std::cout<<fact(val)<<'\n';

	return 0;
}
