#include<iostream>
#include<stack>
#include<string>

bool check_redundant(std::string str){
	
	std::stack<char> s;
        
	for(int i=0; i<str.length(); i++){
                
		if(str[i] != ')'){
                        s.push(str[i]);
                } else {
                        
			if(s.top() == '('){
                                return  true;        
                        }

                        while(s.top() != '('){
                                s.pop();
                        }

                        s.pop();
                }
        }
	
	return false;
}

int main(){
	std::string str;
	getline(std::cin, str);
	
	if(check_redundant(str))
		std::cout<<"Redundant"<<'\n';

	else 
		std::cout<<"Not Redundant"<<'\n';
	return 0;
}
