// A word is considered elfish if it contains the
// letters: e, l, and f in it, in any order

#include<iostream>
#include<string>

bool isElfish(std::string str){
	int e=0;
	int f=0;
	int l =0;
	for(int i=0; i<str.length(); i++){
		if(str[i] == 'e') e++;
		else if(str[i] == 'f') f++;
		else if(str[i] == 'l') l++;

		if(e>0 && f>0 && l>0) return true;
	}

	return false;
}

int main(){
	std::string str;
	std::cin>>str;

	isElfish(str) ? std::cout<<"True" : std::cout<<"False";

	return 0;
}
