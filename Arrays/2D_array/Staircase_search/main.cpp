#include <iostream>
// Staircase Search for sorted rows and columns
// Complexity : O(N)
using namespace std;

int main()
{
    int n=0;
    int m=0;
    int num=0;
    cout<<"Enter n"<<endl;
    cin>> n;
    cout<<"Enter m"<<endl;
    cin>> m;
    int arr[n][m];
    cout<<"Enter array"<<endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter num to be found"<< endl;
    cin>> num;
    int i=n-1;
    int j =0;
    while(i >= 0){
        if(arr[i][j] == num){
            cout<<"Position at"<< i<<","<<j;
            break;
        }

        else if((arr[i][j] < num) && (j< m)){
            j++;
        }
        else if(arr[i][j] > num){
            i--;
        }
    }

    return 0;


}
