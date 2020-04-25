#include <iostream>
#include <string>
#include<unordered_map>


bool islapin(std::string str){
    std::unordered_map<char, int> um;
    int len = str.length();
    int i=0;
    for(i=0; i<len/2; i++){
        um[str[i]]++;
    }
    
    if(len % 2 != 0) i++;
    
    for(i;i<len; i++){
            if(um.count(str[i]))
                um[str[i]]--;
            else {
                std::cout<<str[i];
                return false;
    
            }
    }
            
    int val=0;
    
    for(auto it= um.begin(); it!= um.end(); it++){
        std::cout<<it->first<<" "<<it->second<<'\n';
    }
    
    return val == 0;
}

int main(void) {
	// your code goes here
	int test;
	std::cin>>test;
	
	while(test){
	   std::string str;
	   std::cin>>str;
	   if(islapin(str)) std::cout<<"YES\n";
		else  std::cout<<"NO\n";
	    test--;
	}
	return 0;
}

