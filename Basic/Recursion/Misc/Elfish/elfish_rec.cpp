#include<iostream>

bool isElfish(std::string str, int e, int f, int l){
	if(e>0 && f>0 && l>0) return true;
	
	if(str.length() == 0) return false;

	int len = str.length();
//	std::cout<<str[0]<<"  e:"<<e<<"   f:"<<f<<"  l:"<<l<<'\n';
	if(str[0] == 'e') return isElfish(str.substr(1, len -1), e+1, f, l);
        if(str[0] == 'f') return isElfish(str.substr(1, len -1), e, f+1, l);	
	if(str[0] == 'l') return isElfish(str.substr(1, len -1), e, f, l+1);

	return isElfish(str.substr(1, len-1), e, f, l);
}

int main(){
	std::string str;
	getline(std::cin, str);

	isElfish(str, 0, 0, 0) ? std::cout<<"True"<<'\n' : std::cout<<"False"<<'\n';
	return 0;
}
