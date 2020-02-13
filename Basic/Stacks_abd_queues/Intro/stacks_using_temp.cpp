// Generalizing for all data types

#include<iostream>
#include<vector>

template<typename T>

class Stack{
	private:
		std::vector<T> v;
	public:
		void push(T data){
			v.push_back(data);
		}

		bool isEmpty(){
			return v.size() == 0;
		}

		void viewStack(){
			for(int i=0; i<v.size(); i++){
				std::cout<<v[i]<<" ";
			}
			std::cout<<'\n';
		}

		void pop(){
			if(!isEmpty()){
				v.pop_back();
			}
		}

		T top(){
			return v[v.size() - 1];
		}

};

int main(){
	// Notice the use of <int> after Stack when used with a template
	Stack<int> s;
	for(int i=0; i<10; i++){
		s.push(i);
	}

	while(!s.isEmpty()){
		std::cout<<s.top()<<" ";
		s.pop();
	}
	std::cout<<'\n';
	std::cout<<'\n';

	Stack<char> s1;
        for(int i=65; i<70; i++){
                s1.push(i);
        }

        while(!s1.isEmpty()){
                std::cout<<s1.top()<<" ";
                s1.pop();
        }
        std::cout<<'\n';

	return 0;
}
