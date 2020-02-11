// Insert '*' in between two consecutive similar aplhabets in a string

#include<iostream>
#include<string>

std::string getFinalStr(std::string str){
	if(str.length() <= 1){
		return str;
	}

	std::string str_zero;
		str_zero += str[0];
        if(str[0] == str[1]){
                return  str_zero+'*'  + getFinalStr(str.substr(1, str.length() -1));
        } else {
                return str[0] + getFinalStr(str.substr(1, str.length() -1));
        }	
}

int main(){
	std::string str;
	std::cin>>str;

	std::cout<<getFinalStr(str)<<'\n';
	return 0;
}
