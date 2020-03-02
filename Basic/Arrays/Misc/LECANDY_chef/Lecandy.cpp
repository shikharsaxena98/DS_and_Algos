//
//

#include <iostream>

//using namespace std;

int main() {
	// your code goes here
	int test;
	std::cin>>test;
	
	while(test){
	    
	    int num_e;
	    std::cin>>num_e;
	
	    long long int c;
	    std::cin>>c;
	
	    int* arr = new int[num_e];
	    for(int i=0; i<num_e; i++){
	        std::cin>>arr[i];
	    }
	    
	    for(int i=0; i<num_e; i++){
	        c -= arr[i];
	    }
	    
	    if(c>=0){
	        std::cout<<"Yes"<<'\n';
	    } else {
	        std::cout<<"No"<<'\n';
	    }
	    
	test--;
	}
	
	return 0;
}
