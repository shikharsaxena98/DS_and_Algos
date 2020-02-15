// Check if the paranthesis are balanced in an equation so that it is valid
// Return true or false

#include<iostream>
#include<stack>
#include<string>

bool checkbal(std::string str){
	std::stack<char> s;
	for(int i=0; i<str.length(); i++){
		if(str[i] == '('){
			s.push('(');
		} else if(str[i] == ')' && s.size() >= 1){
			s.pop();
		} else if(str[i] ==')' && s.size() <1){
			return false;
		}

	}

	return s.size() == 0;
}

int main(){
	std::string str;
	std::getline(std::cin, str);

	std::cout<<str<<'\n';
	if(checkbal(str)){
		std::cout<<"True\n";
	} else {
		std::cout<<"False\n";
	}
	//std::cout<<str;
	return 0;
}
