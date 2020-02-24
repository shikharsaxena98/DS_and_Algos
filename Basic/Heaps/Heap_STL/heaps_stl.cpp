#include <iostream>
#include <vector>
#include<algorithm>


int main() {
    	std::vector<int> v;
    	v = {1,2,3,4,5,6};
    	std::cout<<std::is_heap(v.begin(), v.end())<<'\n';

   	 std::make_heap(v.begin(), v.end());

    	std::cout<<std::is_heap(v.begin(), v.end())<<'\n';

    	std::cout<<v.front()<<'\n';

    	v.push_back(70);

    	std::cout<<std::is_heap(v.begin(), v.end())<<'\n';
    	std::make_heap(v.begin(), v.end());

    	std::cout<<v.front()<<'\n';
    	std::pop_heap(v.begin(), v.end());
	v.pop_back();
	std::cout<<"after pop: "<<v.front()<<'\n';
    
	return 0;
}

