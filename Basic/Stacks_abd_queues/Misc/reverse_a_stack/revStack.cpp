#include<iostream>
#include<stack>

std::stack<int> revStack(std::stack<int> s){
	std::stack<int> s1;
	//std::stack s2;

	while(!s.empty()){
		s1.push(s.top());
		s.pop();
	}

	return s1;
}

int main(){
	std::stack<int> s;
        for(int i=0; i<5; i++){
		s.push(i);
	}

	std::stack<int> s1 = s;
	while(!s1.empty()){
		std::cout<<s1.top()<<" ";
		s1.pop();
	}
	std::cout<<'\n';


	s1 = revStack(s);
	std::cout<<"Reversed Stack:"<<'\n';
	while(!s1.empty()){
                std::cout<<s1.top()<<" ";
                s1.pop();
        }

	return 0;
}
