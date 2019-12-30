// Given matrix with m rows and c cols
// swap the first col with last

#include<iostream>

void traverse(int arr[][5], int r, int c){
	for(int i=0; i<r;i++){
		for(int j=0; j<c;j++){
			std::cout<<arr[i][j]<<" ";
		}

		std::cout<<std::endl;
	}
}

void swap(int* val1, int* val2){
	int tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;
}


void swap_col(int arr[][5], int r, int c){
	for(int i=0; i<r;i++){
		swap(&arr[i][1], &arr[i][4]);
	}
}

int main(){
	
	int arr[][5]= {{1,2,3,4,5},
 	        	{6,7,8,9,10},
	      		{11, 12, 13, 14, 15}	      
			};	
	

	traverse(arr, 3, 5);
	std::cout<<"After Swaping"<<"\n";
	swap_col(arr, 3, 5);
	traverse(arr, 3, 5);

	return 0;
}
