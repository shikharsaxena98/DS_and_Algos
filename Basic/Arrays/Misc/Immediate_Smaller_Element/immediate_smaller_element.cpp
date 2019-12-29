/* Given an integer array of size N. For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller. If next element is smaller, print that element. If not, then print -1.
 */

#include <iostream>
using namespace std;

bool issmall(int * ptr1, int * ptr2){
    if(*ptr1 > *ptr2){
        return true;
    }
    
    else
        return false;
    
}

void printseq(int *arr, int N){
    for(int i=1; i<N; i++){
        if(issmall(arr + i-1, arr + i)){
            cout<<*(arr + i)<<" ";
            
        }
	    
	    else
	        cout<<-1<<" ";
	}
	
	cout <<-1;
    
}

int main() {
	//code
	int T {};
	int N {};
	int arr[1000000] {};
	cin>>T;
	for(int i=0; i<T; i++){
	    cin>>N;
	    for(int j=0; j<N; j++){
	        cin>>arr[j];
	    }
	    
	    printseq(arr, N);
	    cout<<"\n";
	}

	return 0;
}
