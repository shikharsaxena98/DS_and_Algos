// Given a string and a non-empty substring sub, compute recursively if at least// n copies of sub appear in the string somewhere, possibly with overlapping. 
// N will be non-negative.

#include<iostream>
#include<string>

bool strCopies(std::string str1, std::string str2, int n){
	std::cout<<str1<<"   "<<str2<<"       "<<n<<'\n'; 
	if((str1.find(str2) == std::string::npos) && (n == 0)){
		return true;
	}

	if(str1.find(str2) == std::string::npos) return false;

	int idx = str1.find(str2);
	idx += str2.length();
	return strCopies(str1.substr(idx, str1.length() - idx), str2, n-1);
}

int main(){
	std::string str1;
	std::cin>>str1;

	std::string str2;
	std::cin>>str2;

	int n;
	std::cin>>n;

	strCopies(str1, str2, n) ? std::cout<<"True\n":std::cout<<"False\n";

	return 0;
}
