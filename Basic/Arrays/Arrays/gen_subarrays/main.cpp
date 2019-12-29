#include <iostream>
//print all sub arrays of an array
using namespace std;

int main()
{
    int A[10] = {};
    int n;
    cin>> n;
    for(int i = 0 ; i<n; i++){
        cin >> A[i];
    }

    for(int i = 0; i<n; i++){
        for(int j =i;j<n; j++){
            for(int k =i; k<=j; k++){
              cout<<A[k]<<',';

            }
        cout<<endl;
        }

    }
    return 0;
}
