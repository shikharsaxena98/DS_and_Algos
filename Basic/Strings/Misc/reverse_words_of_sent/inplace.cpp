#include<iostream>
#include<string>
#include<algorithm>

int findSpace(std::string message, int i){
    while(message[i] != '\0'){
        if(message[i] == ' ') return i;
        i++;
	std::cout<<i<<" ";
    }
    std::cout<<'\n';
    return -1;
}

void reverseWords(std::string message)
{
    // decode the message by reversing the words
    int i=0;
    int space_idx = findSpace(message, 0);
    while(space_idx!= -1){
        std::reverse(message.begin() + i, message.begin() + space_idx);
	std::cout<<i<<"   "<<space_idx<<'\n';
        i = space_idx;
        space_idx=  findSpace(message.substr(i, message.length() - i), i);
    }

}


int main(){
	std::string str;
	getline(std::cin, str);
	reverseWords(str);
	std::cout<<str;
	return 0;
}
