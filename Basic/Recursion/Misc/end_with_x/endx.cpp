// Given a string, compute recursively a new string where all the lowercase 'x' chars have been moved to the end of the string.

#include<iostream>
#include<string>

std::string endX(std::string str){
	if(str.length() == 0) return "";

	if(str[0] == 'x') return endX(str.substr(1, str.length() - 1)) + str[0];

	return str[0] + endX(str.substr(1, str.length() -1));
}

int main(){
	std::string str;
	getline(std::cin, str);

	std::cout<<endX(str)<<'\n';

	return 0;
}
