// Reverse all teh words of the string
// eg: This is a dog => sihT si a god 

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

std::string getsub(std::string str, int start, int len){
	return str.substr(start, len);
}

int main(){
	std::string str;
	std::getline(std::cin, str);
	
	std::vector<std::string> v;
	int word_s {0};
	for(int i=0; i<str.length(); i++){
		
		if((str[i] == ' ') && (word_s ==0)){
			v.push_back(getsub(str, 0, i));
			word_s = i+1;
		} else if(str[i] == ' ') {
			v.push_back(getsub(str, word_s, i-word_s));
			word_s = i+1;
		}

	}

	v.push_back(getsub(str, word_s, str.length()-word_s));



	for(int i=0 ; i<v.size(); i++){
		std::reverse(v[i].begin(), v[i].end());
	}

	for(int i=0; i<v.size(); i++){
		std::cout<<v[i]<<" ";
	}
	std::cout<<'\n';
	return 0;
}
