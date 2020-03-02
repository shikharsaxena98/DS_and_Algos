// Quick Sort

#include<iostream>

int partition(int* arr, int start, int end){
	int pivot = arr[end-1];
        int i = start - 1;

        for(int j=start; j<end; j++){
                if(arr[j] <= pivot){
                        i++;
                        std::swap(arr[i], arr[j]);
                }
        }

	return i;

}

void quickSort(int* arr, int s, int e){
	if(s>=e){
		return;
	}

	int i = partition(arr, s, e);
	quickSort(arr, s, i);
	quickSort(arr, i+1, e);
	
}

int main(){
	int arr[] = {2, 7, 8, 6, 1, 5, 4};
	int len = 7;

	quickSort(arr, 0, len);

	for(int i=0; i<len; i++){
		std::cout<<arr[i]<<" ";
	}

	std::cout<<'\n';
	return 0;
}
