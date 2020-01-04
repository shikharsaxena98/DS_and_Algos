//Implement a stack that gets the min value from the stack with a 
//complexity of O1(

#include<iostream>

class Stack{
	private:
		int top;
		int arr[100];
	
	public:
		Stack(){
			std::cout<<"Initialising a stack";
			int top=-1;
		}

		bool isEmpty(){
			if(top == -1){
				return true;
			}

			return false;
		}

		int pop(){
			if(top==-1){
				std::cout<<"Stack empty";
				return 0;
			}

			int val= arr[top];
			top--;
			return val;
		}

		void push(int val){
			if(top >= 99){
				std::cout<<"Stack full";
			}
			
			top++;
			arr[top]= val;
		}
};


class SpecialStack: public Stack{
		Stack min;	

		public:
		void push(int val){
			if(isEmpty() == true){
				min.push(val);
				push(val);
			} else {
				int tmp = min.pop();
				min.push(tmp);
				if(tmp > val){
					min.push(val);
				} else {
					min.push(tmp);
				}
			}

		}

		int pop(){
			int x = Stack::pop();
    			min.pop();
    			return x;
		}

		// SpecialStack's member method to get minimum element from it.
		int getMin(){
    
			int x = min.pop();
			min.push(x);
    			return x;
			}
		
};


int main(){
	SpecialStack s; 
    	s.push(10); 
    	s.push(20); 
    	s.push(30); 
	std::cout<<s.getMin()<<'\n'; 
    	s.push(5); 
	std::cout<<s.getMin()<<'\n'; 
   	return 0;
}
