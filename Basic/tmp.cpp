#include<iostream>
//#include<string>

std::pair<int, int> getHT(char* str, int len){
	int maxh=0;
	int maxt=0;

	int temph=0;
	int tempt=0;

	for(int i=0; i<len; i++){
		if(str[i] == 'H'){
			temph++;
		} else {
			maxh = std::max(maxh, temph);
			temph=0;
		}

		if(str[i] == 'T'){
			tempt++;
		} else {
			maxt = std::max(tempt, maxt);
			tempt =0;
		}
//		std::cout<<"LOOP "<<i<<"   tempt: "<<tempt<<"   Maxt: "<<maxt<<"   Maxh"<<maxh<<"  temph"<<temph<<'\n';
	}

	maxt = std::max(maxt, tempt);
	maxh = std::max(maxh, temph);
	std::pair<int, int> p = {maxh, maxt};
	return p;
}

int main(){
	int len;
	std::cin>>len;

	char* str = new char[len];
	for(int i=0; i<len; i++){
		std::cin>>str[i];
	}

	std::pair<int, int> p = getHT(str, len);
	std::cout<<"H: "<<p.first<<"  T: "<<p.second<<'\n';	

	return 0;
}
