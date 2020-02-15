#include<iostream>
#include<stack>

void join(std::stack<int> &s, int x){
	if(s.empty()){
		s.push(x);
		return;
	}

	std::stack<int> temp;
	while(!s.empty()){
		temp.push(s.top());
		s.pop();
	}

	s.push(x);

	while(!temp.empty()){
		s.push(temp.top());
		temp.pop();
	}

	return;
}

void revStack(std::stack<int> &s){
	if(s.size() <= 1){
		return;
	}
	
	int x = s.top();
	s.pop();
	revStack(s);
	join(s, x);
	return ;
	
}

int main(){
	std::stack<int> s;
	for(int i=0; i<=5; i++){
		s.push(i);
	}

	std::stack<int> temp = s;
	while(!temp.empty()){
		std::cout<<temp.top()<<" ";
		temp.pop();
	}
	std::cout<<'\n';

	revStack(s);

	while(!s.empty()){
		std::cout<<s.top()<<" ";
		s.pop();
	}

	std::cout<<'\n';

	return 0;
}

