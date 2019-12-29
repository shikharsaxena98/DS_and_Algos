// BUBBLE SORT

#include<iostream>

int main(){
	int arr[5] {10, 30,54, 3, 1};
	int temp {};
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			} 
		}
	}

	for(int i=0; i<5; i++){
		std::cout<<arr[i]<<"\n";
	}
	
	return 0;
}
