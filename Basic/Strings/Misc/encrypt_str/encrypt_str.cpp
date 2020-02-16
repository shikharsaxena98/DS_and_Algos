// Replace all vowels with '*' and add a '*' between constants, retrun a lower cased string
// e.g inp: ABcdeghfilkhoua 
// 	out: *b*c*d*g*h*f*l*k*h***

#include<iostream>
#include<queue>
#include<string>

void lower(std::string &str){
	for(int i=0; i<str.length(); i++){
		if(static_cast<int>(str[i])<97){
			str[i] = static_cast<char>(static_cast<int>(str[i]) + 32);
		}
	}
}

void rep_vow(std::string &str){
	for(int i=0; i<str.length(); i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			str[i] = '*';
		}
	}
}

char* final_func(std::string str){
	//std::cout<<"Entered final"<<'\n';
	char* arr = new char[100];

	//std::cout<<"HI"<<'\n';

	std::queue<char> q;
	
	q.push(str[0]);
	
	//std::cout<<"Str size: "<<str.length()<<'\n';

	for(int i=1; i<str.length(); i++){
		//std::cout<<"In For loopi: "<<i<<'\n';
		if(str[i] == '*'){
			if(q.back() == '*');
			else q.push('*');
		} else {
			if(q.back() == '*'){
				q.push(str[i]);
			} else {
				q.push('*');
				q.push(str[i]);
			}
		}

	}


//	int i=0;

	//std::cout<<"Que size: "<<q.size()<<'\n';
	int x= q.size();
	for(int i=0; i<x; i++){
		//std::cout<<i<<'\n';
		arr[i] = q.front();
		q.pop();
	}

//	arr[i] = '\0';

	return arr;
}

char* encrypt(std::string str){
	lower(str);
	rep_vow(str);
	
//	std::cout<<"Entering final"<<'\n';

	char* arr = final_func(str);
	return arr;

}

int main(){
	std::string str;
	std::cin>>str;

	std::cout<<encrypt(str)<<'\n';

	return 0;
}
