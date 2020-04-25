#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

template <typename T>
class graph{
	int V;
	std::unordered_map<T, std::vector<T>> um;

	public:
		void addEdge(T u, T v, bool bidir=true){
			um[u].push_back(v);
			if(bidir){
				um[v].push_back(u);
			}	
		}

		void printAdj(){
			for(auto obj: um){
				std::cout<<obj.first<<"-->";
				for(T val: obj.second){
					std::cout<<val<<", ";
				}
				std::cout<<'\n';
			}
		}

};

int main(){
	graph<std::string> g;
	g.addEdge("Modi", "Yogi");
	g.addEdge("Modi", "Trump", false);
	g.addEdge("Prabhu", "Modi", false);
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Putin", "Trump", false);
//	g.addEdge(5,10);

	g.printAdj();
	return 0;
}
