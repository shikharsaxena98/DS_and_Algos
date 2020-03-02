// App1: using arrays

#include<iostream>

int main(){
	int target = 0;
	int arr[] = {6, -1, 2, 1, -1, 2, -2, 5, 4, -9};

	for(int i=0; i<10; i++){
		int cursum = arr[i];
		if(cursum == target){
			std::cout<<"Target at i:"<<i<<'\n';
		}
		for(int j = i+1; j<10; j++){
			cursum += arr[j];
			if(cursum == target){
				std::cout<<"Sub Arr from i:"<<i<<" to j:"<<j<<'\n';
			}
		//	std::cout<<arr[i]<<"	   "<<arr[j]<<"      "<<cursum<<'\n';
			//cursum += arr[j];
		}
	}

	return 0;
}
