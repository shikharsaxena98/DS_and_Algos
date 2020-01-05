#include<iostream>
#include<queue>

class Stack {
	std::queue <int> q1;
	std::queue <int> q2;
	int curr_size;

	public:
		Stack(){
			curr_size = 0;
		}


		void push(int x){
			curr_size++;
			q1.push(x);

		}	

};

int main(){
	return 0;
}
