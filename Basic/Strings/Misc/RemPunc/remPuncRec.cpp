#include<iostream>
#include<string>

std::string punc = "!#$%&'()*+,-./:;?@[\]^_`{|}~";

std::string remPunc(std::string str, int i){
	if(i >= str.length()) return "";
	if(punc.find(str[i]) != std::string::npos) return remPunc(str, i+1);
	else return str[i] + remPunc(str, i+1);
}

int main(){
	std::string str;
	std::cin>>str;

	std::cout<<remPunc(str, 0)<<'\n';

	return 0;
}
