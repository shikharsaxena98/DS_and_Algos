// Given a string, compute recursively a new string where all the adjacent chars are now separated by a "*"

#include<iostream>
#include<string>

std::string allStar(std::string str){
	if(str.length() == 0) return "";
	if(str.length() == 1) return str;

	return str.substr(0, 1)+ "*" + allStar(str.substr(1, str.length() - 1));
}

int main(){
	std::string str;
	getline(std::cin, str);

	std::cout<<allStar(str)<<'\n';
	return 0;
}
