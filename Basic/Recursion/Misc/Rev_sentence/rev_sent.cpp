#include<iostream>
#include<string>

std::string revStr(std::string str){
 	if(str.length() == 0){
		return "";
	}


	int i=0;
	for(i=0; i<str.length(); i++){
		if(str[i] == ' ') break;
	}

	if(i == str.length()){
		return str;
	}
	
	i++;

	return revStr(str.substr(i, str.length() - i)) +" "+ str.substr(0, i-1); 
}

int main(){
	std::string str;
	getline(std::cin, str);

	std::cout<<revStr(str)<<'\n';
	return 0;
}
