#include<iostream>
#include<stack>

std::stack <int> s1;

void push_num(int num){
	while(num != 0){
		s1.push(num%10);
		num = num / 10;
	}
}

int rev_num(){
	int rev {};
	int i=1;
	while(!s1.empty()){
		//std::cout<<s1.top();
		rev += s1.top() * i;
		//std::cout<<rev<<'\n';
		s1.pop();
		i *= 10;	
	}
	
	return rev;
}

int main(){
	int num {};
	std::cin>>num;

	push_num(num);
	int rev {rev_num()};
	
	std::cout<<rev<<'\n';

	return 0;
}
