// Given a string, compute recursively a new string where identical chars that are 
// adjacent in the original string are separated from each other by a "*".

#include<iostream>
#include<string>

std::string pairStar(std::string str){
	if(str.length() == 1) return str;

	if(str[0] == str[1]) return str.substr(0, 1) + "*" + pairStar(str.substr(1, str.length() -1));

	return str[0] + pairStar(str.substr(1, str.length() - 1));
}

int main(){
	std::string str;
	getline(std::cin, str);

	std::cout<<pairStar(str)<<'\n';
	return 0;
}
