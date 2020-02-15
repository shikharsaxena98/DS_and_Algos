#include<iostream>
#include<list>

class Queue {
	int cs;
	std::list<int> link;

	public:
		Queue(){
			cs =0;
		}

		bool isEmpty(){
			return cs == 0;
		}

		void enq(int data){
			link.push_back(data);
			cs++;
		}

		void deq(){
			if(!isEmpty()){
				cs--;
				link.pop_front();
			}
		}

		int getFront(){
			return link.front();
		}
};

int main(){
	Queue q;
	for(int i=0; i<10; i++){
		q.enq(i);
	}

	q.deq();
	q.deq();
	q.enq(70);

	for(int i=0; i<9; i++){
		std::cout<<q.getFront()<<' ';
		q.deq();
	}
	std::cout<<'\n';
	
	return 0;
}
