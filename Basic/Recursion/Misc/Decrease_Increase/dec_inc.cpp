// Given n, decrease the number by 5 untill it is 0 or less than 0, then add 5 untill it is equal to the number.
// e.g: 16 => 16 11 6 1 -4 1 6 11 16

#include <iostream>
//using namespace std;

void pattern_inc(int num, int n){
    if(n == num){
        std::cout<<n<<'\n';
        return;
    }
    
    std::cout<<n<<" ";
    pattern_inc(num, n+5);
}

void pattern_red(int num, int n){
    if(n <= 0){
        std::cout<<n<<" ";
        pattern_inc(num, n+5);
        return;
    }
    
    std::cout<<n<<" ";
    pattern_red(num, n-5);
}

int main() {
	//code
	int test;
	std::cin>>test;
	while(test--){
	int num;
	std::cin>>num;
	
	//bool flag = false;
	pattern_red(num, num);
	}
	return 0;
}
