#include<iostream>

bool isPossible(int num){
	if(num == 0){
		return false;
	}

	if(num ==1){
		return true;
	}

	bool one = false;
	bool two = false;
	if(num%10 == 0){
		one = isPossible(num/10);
      
	}

	if(num%20 == 0){
		two = isPossible(num/20);
	} 

	return one || two;
}

int main(){
	int n;
	std::cin>>n;

	isPossible(n) ? std::cout<<"Yes": std::cout<<"No";

	return 0;
}
