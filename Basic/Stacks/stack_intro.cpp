// Stacks: FILO
// Operations: pop: Remove top element
// 	       push: Add element at top
// 	       isempty: check if stack is empty
// 	       peek: view top element
// All operations have O(1)

// Implementation using arrays

#include<iostream>

class Stack {
	// Private var
	private:
	int top;
		
	public:
		int a[100]; //Size of the stack

		Stack(){
			top = -1;
			std::cout<<"max size of stack is: 100"<<"\n";
		}
		
		// Defining isEmpty
		bool isEmpty(){
			if(top == -1){
				return true;
			}

			return false;
		}

		//Defining Peek
		int peek(){
			if(top == -1){
				std::cout<<"Empty Stack"<<'\n';
				return 0;
			} else {
				int val = a[top];
				return val;
			}
		}

		//Defining pop
		int pop(){
			if(top == -1){
				std::cout<<"Empty stack"<<'\n';
				return 0;
			} else {
				int val = a[top];
				top--;
				return val;
			}
		}

		//Defining push
		void push(int val){
			if(top == 99){
				std::cout<<"Stack Full"<<'\n';
				            
			} else {
				top++;
				a[top] = val;
				std::cout<<val<<" pushed into stack"<<"\n";
			}
		}
		//Defining viewStack
		void viewStack(){
			if(top == -1){
				std::cout<<"Empty Stack"<<'\n';
			} else{
				std::cout<<"Top = "<<top<<"\n";
				for(int i=0; i<=top; i++){
					std::cout<<a[i]<<" ";
				}
				std::cout<<'\n';
			}
		}
		
};



int main(){
	//Init mystack onject
	class Stack mystack;

	//View if any element is present i the stack
	if(!mystack.isEmpty()){
		mystack.viewStack();
	}

	//Pushing values into stack
	mystack.push(5);
	for(int i=0; i<10; i++){
		mystack.push(i);
	}
	
	//Looking at the topmost value
	std::cout<<"Top value: "<<mystack.peek()<<'\n';

	// View the complete stack
	if(!mystack.isEmpty()){
		mystack.viewStack();
	}

	//Removing all the elemnts
	while(!mystack.isEmpty()){
		mystack.pop();
		mystack.viewStack();
	}
	
	return 0;

}
