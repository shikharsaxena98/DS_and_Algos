#include<iostream>
#include<string>

std::string remDup(std::string str){
	if(str.length()<= 1){
		return str;
	} 

	if(str[0] != str[1]){
		return str[0] + remDup(str.substr(1, (str.length() - 1)));
	} else {
		return remDup(str.substr(1, (str.length() - 1)));
	}

}


int main() {
	std::string str;
	std::cin>>str;

	std::cout<<remDup(str)<<'\n';
	return 0;
}
