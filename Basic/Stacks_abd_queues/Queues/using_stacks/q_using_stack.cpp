// Queues have a FIFO
// can be implemented using two stacks

#include<iostream>
#include<stack>

class Queue {
	std::stack <int> s1;
	std::stack <int> s2;
	
	public:
		void enQ(int x){
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}

			s1.push(x);

			while(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}
		}

		int deQ(){
			if(s1.empty()){
				std::cout<<"Queue is empty"<<"\n";
				return 0;
			}

			int x= s1.top();
			s1.pop();
			return x;
		}
};	
	       
int main(){

	Queue q;
	q.enQ(1);
	q.enQ(2);
	q.enQ(3);

	std::cout<<q.deQ()<<"\n";
	std::cout<<q.deQ()<<'\n';
	std::cout<<q.deQ()<<'\n';

	return 0;
}
