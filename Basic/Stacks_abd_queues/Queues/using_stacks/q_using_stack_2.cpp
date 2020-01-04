#include<iostream>
#include<stack>

class Queue {
	std::stack <int> s1;
	std::stack <int> s2;

	public:
		void enQ(int x){
			s1.push(x);
		}

		int deQ(){
			if(s1.empty()){
				std::cout<<"Queue is Empty"<<'\n';
				return 0;
			}

			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}

			int x = s2.top();
			s2.pop();

			while(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}

			return x;
		}
		
};

int main(){
	Queue q;
	q.enQ(1);
	q.enQ(2);
	q.enQ(3);

	std::cout<<q.deQ()<<'\n';
	std::cout<<q.deQ()<<'\n';
	std::cout<<q.deQ()<<'\n';

	return 0;
}
