// Remove consecutive duplicates
#include<iostream>
#include<string>

int check_cons(std::string str, char a){
	int count {0};
	int len = str.length();
	for(int i=0; i<len; i++){
		if(str[i] != a){
			break;
		}

		count++;
	}

	return count;
}

std::string remDup(std::string str, int len){
	std::string fstr;
	// Base Case
	if(len <= 1){
		return str;
	}
	
	// Rec Case
	int l = check_cons(str, str[0]);
	if(l){
		return str[0] + remDup(str.substr(l, len -l), len-l);
	} else{
		return str[0] + remDup(str.substr(1, len-1), len-1);
	}
	
}

int main(){
	std::string str;
	std::cin>>str;

	std::cout<<remDup(str, str.length())<<'\n';
	return 0;
}
