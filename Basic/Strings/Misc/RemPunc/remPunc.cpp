#include<iostream>

std::string remPunc(std::string str){
	std::string ans = "";
	for(int i=0; i<str.length(); i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ') ans += str[i];
	}
	return ans;
}

int main(){
	std::string str;
	getline(std::cin, str);

	std::cout<<remPunc(str)<<'\n';
	return 0;
}
