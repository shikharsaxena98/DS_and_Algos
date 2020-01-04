// Stacks in STL in c++

//Functions:
//	1. empty(): check if stack is empty
//	2. size(): size of stack
//	3. top(): returns a ref to the top element
//	4. push(val): pushes the value
//	5. pop(): deletes the element
//	6. swap():
//	7. emplace(): 

#include<iostream>
#include<stack>

int main(){
	std::stack <int> s;
	std::stack <int> s1;
	
	s1.push(100);
	s1.push(200);

	s.push(10);
	std::cout<<s.size()<<'\n';
	s.push(20);
	s.push(30);
	int val= s.top();
	std::cout<<"Top of stack0 before swapping: "<< val<<'\n';
	
	s1.swap(s);

	std::cout<<"After swapping: "<< (s.top())<<'\n';

	std::cout<<s.size()<<'\n';

	while(!s.empty()){
		s.pop();
	}

	std::cout<<s.size()<<'\n';
	
	//Using emplace to add the value at the top of the stack
	
	std::stack <int> s2;
	s2.push(3);
	std::cout<<"Top value: "<<s2.top()<<'\n';

	s2.emplace(32);
	std::cout<<"Top value: "<<s2.top()<<'\n';

	s2.push(40);
	std::cout<<"Top value: "<<s2.top()<<"\n";

	s2.pop();
	s2.pop();
	s2.pop();
	std::cout<<s2.size();

	return 0;
}
