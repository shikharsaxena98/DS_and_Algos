#include<iostream>
#include<string>

std::string replaceX(std::string str){
	if(str.length() == 0) return "";
	if(str[0] == 'x') return "y" + replaceX(str.substr(1, str.length() -1));

	return str[0] + replaceX(str.substr(1, str.length() -1));
}

int main(){
	std::string str;
	getline(std::cin, str);

	std::cout<<replaceX(str)<<'\n';
	return 0;
}

