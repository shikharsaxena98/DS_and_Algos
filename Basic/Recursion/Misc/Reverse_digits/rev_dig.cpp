#include<iostream>

int rev_dig(int fval, int num){
	if(num == 0){
		return fval;
	}

	return rev_dig(fval*10 + num%10, num/10);

}


int main(){
	int test;
	std::cin>>test;
	while(test--){
		int num;
		std::cin>>num;

		int rev = rev_dig(0, num);
		std::cout<<rev;
	}
}
