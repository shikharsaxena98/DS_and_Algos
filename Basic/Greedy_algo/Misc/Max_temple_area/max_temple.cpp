#include<iostream>
int main() {
	int num;
	std::cin>>num;

	int last_x = 0;
	int last_y = 0;

	int x_val=0;
	int y_val=0;

	while(num--){
		int x, y;
		std::cin>>x>>y;
		x_val = std::max(x - last_x -1, x_val);
		y_val = std::max(y - last_y - 1, y_val);
		last_x = x;
		last_y = y;
//	std::cout<<x_val<<" "<<y_val;
	}

//	std::cout<<x_val<<" "<<y_val;
	std::cout<<x_val * y_val <<'\n';
	return 0;
}
