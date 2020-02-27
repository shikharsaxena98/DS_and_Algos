// 1. insert(k, val)
// 2. search(k)
// 3. delete(k)

#include<iostream>
#include<map>		  // Based on balanced BST: keepg things in order
#include<unordered_map>	  // Based on seperate chaining

int main(){
	std::unordered_map<std::string, int> m;
	
	m["mango"] = 100;
	m.insert(std::make_pair("apple", 500));
	m["guava"] = m["mango"] + 100;

	m.count("apple") == 1 ? std::cout<<"Apple: "<<m["apple"]<<'\n': std::cout<<"Apple not found\n";
	
	//iterate
	 
	auto f = m.find("mango");

	if(f != m.end()){
		std::cout<<"Mango: "<<f->second<<'\n';

	} else {
		std::cout<<"Mango not found"<<'\n';
	}

	m.erase("mango");
	
	f= m.find("mango");
	
	if(f != m.end()){
                std::cout<<"Mango: "<<f->second<<'\n';

        } else {
                std::cout<<"Mango not found"<<'\n';
        }


	return 0;
}
