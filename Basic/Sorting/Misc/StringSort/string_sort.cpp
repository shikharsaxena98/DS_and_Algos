// Sort all the strings ( lexicographically ) but if a string is present 
// completely as a prefix in another string, then string with longer 
// length should come first. Eg bat, batman are 2 strings and the string bat 
// is present as a prefix in Batman - then sorted order should have 
// - Batman, bat.

#include<iostream>
#include<algorithm>
#include<string>

bool check_pre(std::string str1, std::string str2){
        int len {str1.length()};
        for(int i=len-1; i>=0; i--){
            if(str1[i] != str2[i]) return false;
        }
 
    return true;
}

bool compare(std::string str1, std::string str2){
    if(check_pre(str1, str2)){
	std::cout<<str1<<" is a sub of "<<str2<<'\n';
        return true;

    }// else (check_pre(str2, str1)){
//	std::cout<<str2<<" a sub of "<<str1<<'\n';
//    	return false;
//    } 
	
    std::cout<<str1<<"less that str2 "<<(static_cast<int>(str1<str2))<<'\n';
    return str1 < str2;

    } 




int main() {
    int len {0};
    std::cin>>len;

    std::string* arr = new std::string[len];
    for(int i=0; i<len; i++){
        std::cin>>arr[i];
    }       

    std::sort(arr, arr+len, compare);

    for(int i=0; i<len; i++){
        std::cout<<arr[i]<<'\n';
    }
	return 0;
}
