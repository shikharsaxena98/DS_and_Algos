#include<iostream>

class Queue{
	private:
		int ins = -1;
		int get = 0;
		int arr[100] {0};

	public:
		bool isEmpty(){
			return ins <= -1;
		}

		int top(){
			if(!isEmpty()){
				return arr[get];
			} else {
				std::cout<<"Queue Empty"<<'\n';
				return 0;
			}
		}

		void enQ(int data){
			arr[++ins] = data;	
		}

		void deQ(){
			if(get <= ins){
				get++;
			} else {
				std::cout<<"Out of index"<<'\n';
			}
		}

};

int main(){

	Queue q;
	for(int i=0; i<10; i++){
		q.enQ(i);
	}

	while(!q.isEmpty()){
		std::cout<<q.top()<<" ";
		q.deQ();
	}

	return 0;
}
