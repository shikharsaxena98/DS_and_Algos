#include<iostream>
#include<vector>

class Stack{
	private:
	std::vector<int> v;
	
	public:
		void push(int data){
			v.push_back(data);
		}

		void pop(){
			if(!isEmpty()){
				v.pop_back();
			} else {
				std::cout<<"Empty Stack"<<'\n';
			}
		}

		bool isEmpty(){
			return v.size() == 0;
		}

		int top(){
			return v[v.size() - 1];
		}

};

int main(){
	Stack s;
	std::cout<<s.isEmpty()<<'\n';
	for(int i=0; i< 5; i++){
		s.push(i);
	}

	while(!s.isEmpty()){
		std::cout<<s.top()<<'\n';
		s.pop();
	}

	return 0;
}
