#include <iostream>

bool isMul(long int n, int a, int b){
    long int s = a+b;
    for(long int i=2; i<n; i++){
        a = b;
        b = s%10;
       // std::cout<<b;
        s += b;
      //  s = a+b;
    }
    
    return s%3 == 0;
}

int main(void) {
	// your code goes here
	int test;
	std::cin>>test;
	
	while(test){
	    long int n;
	    int a, b;
	    std::cin>>n>>a>>b;
	    isMul(n ,a, b) ? std::cout<<"YES\n" : std::cout<<"NO\n";
	    test--;
	}
	return 0;
}



