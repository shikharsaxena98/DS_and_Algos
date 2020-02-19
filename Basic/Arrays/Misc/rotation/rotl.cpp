#include<iostream>
#include<algorithm>

int main(){
	int data [] = {1,2,3,4,5,6,7,8,9};
	int n = 9;
	int rotL = 3;

	// std::rotate(beg_of_original_array, beg_of_rotated_arr, end_of_roriginal)
	std::rotate(data, data+rotL, data+n);

	for(int i=0; i<9; i++){
		std::cout<<data[i]<<'\n';
	}
}
