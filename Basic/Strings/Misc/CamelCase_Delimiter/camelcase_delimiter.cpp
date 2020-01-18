// Tokenize a string on every capital letter

#include<iostream>
#include<string>

void print_sub(std::string str, int start, int len){
	std::string tmp=str.substr(start, len);
	std::cout<<tmp;
}

void cc_to_words(std::string str){
	int len {str.length()};		// String length	
	int word_c {0};			// variable for Word start position
	for(int i=1; i<len; i++){
		if(str[i] <= 'Z'){
			if(word_c==0){

				print_sub(str, 0, i);
				word_c = i;
			} else{

				print_sub(str, word_c, i-word_c);
				word_c = i;
			}

			std::cout<<'\n';
		}


	}

	std::cout<<str.substr(word_c, len);
}

int main(){
	std::string str {};
	std::cin>>str;
	
	cc_to_words(str);
	
	return 0;
}
