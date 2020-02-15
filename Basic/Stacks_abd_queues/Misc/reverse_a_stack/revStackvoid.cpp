#include<iostream>
#include<stack>

void transfer(std::stack<int> &s1, std::stack<int> &s2, int n){
	for(int i=0; i<=n; i++){
		s2.push(s1.top());
		s1.pop();
	}
}

void revStack(std::stack<int> &s){
	//std::stack<int> temp;
	int l = s.size();
	std::cout<<l<<'\n';
	for(int i=0; i<l; i++){
		std::stack<int> temp;
		int x=s.top();
		transfer(s, temp, l-i-1);
			
		s.push(x);

		transfer(temp, s, l-i-2);
	}

}

int main(){
	std::stack<int> s;

	for(int i=0; i<=5; i++){
		s.push(i);
	}

	std::stack<int> s2 = s;
	while(!s2.empty()){
		std::cout<<s2.top()<<' ';
		s2.pop();
	}

	std::cout<<'\n';

	revStack(s);

	while(!s.empty()){
                std::cout<<s.top()<<' ';
                s.pop();
        }


	return 0;
}
