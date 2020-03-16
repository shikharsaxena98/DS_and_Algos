#include<iostream>
#include<string>

std::string removeX(std::string str){
	if(str.length() == 0) return "";

	if(str[0] == 'x') return removeX(str.substr(1, str.length()-1));
	
	return str[0] + removeX(str.substr(1, str.length() - 1));

}

int main(){
	std::string str;
	getline(std::cin, str);

	std::cout<<removeX(str)<<'\n';

	return 0;
}
