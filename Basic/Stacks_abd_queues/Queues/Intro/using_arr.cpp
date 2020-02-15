#include<iostream>
// Implement a circular queue

class Queue{
	private:
		int front = 0;
		int rear = 0;
		int ms;
		int cs = 0;
		int* arr;

	public:
		Queue(int size){
			ms= size;
			arr = new int[ms];
		}

		bool isEmpty(){
			return cs == 0;
		}

		bool isFull(){
			return cs >= ms;
		}

		int top(){
			if(!isEmpty()){
				return arr[front];
			} else {
				std::cout<<"Queue Empty"<<'\n';
				return 0;
			}
		}

		void enQ(int data){
			rear = rear%ms;
			
			if(!isFull()){
				std::cout<<"Adding "<< data <<"to "<<rear<<'\n';

				arr[rear] = data;
				rear++;

				cs++;
			}
		}

		void deQ(){
			if(!isEmpty()){
				front++;
				front = front%ms;
				cs--;
			} else {
				std::cout<<"Out of index"<<'\n';
			}
		}

};

int main(){

	Queue q(5);
	for(int i=0; i<10; i++){
		q.enQ(i);
	}

	q.deQ();
	q.enQ(71);

	while(!q.isEmpty()){
		std::cout<<q.top()<<" ";
		q.deQ();
	}

	return 0;
}
