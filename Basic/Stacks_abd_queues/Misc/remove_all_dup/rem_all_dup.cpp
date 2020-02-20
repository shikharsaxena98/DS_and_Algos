#include<iostream>
#include<queue>
#include<algorithm>

char* rem_dup(char* str, int len){
	std::queue<char> q;
	
	std::sort(str, str+len);
	q.push(str[0]);
	for(int i=1; i<len; i++){
		if(str[i] != q.back()){
		//	std::cout<<"Pushing "<<str[i]<<'\n';        
			q.push(str[i]);
		}
	}
	int s = q.size();
	for(int i=0; i<s; i++){
		std::cout<<q.front();
		q.pop();
	}
	return str;
}

int main(){
	int len;
	std::cin>>len;

	char* str = new char[len];
	//std::cin.getline(str, len);

	for(int i=0; i<len; i++){
		std::cin>>str[i];
	}

	rem_dup(str, len);
	return 0;
}
