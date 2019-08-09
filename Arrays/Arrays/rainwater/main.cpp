#include <iostream>

using namespace std;

int main()
{
    int A[50];
    int lft[50];
    int rht[50];
    int n=0;
    int water;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    for(int i = 0; i<n; i++){
        if(i==0) lft[i] = A[i];
        else lft[i] = max(A[i], A[i-1]);

        if(i==n-1) rht[0] = A[0];
        else rht[n-1-i] = max(A[n-1-i], A[n-1-(i+1)]);
    }

    for(int i = 0; i<n; i++){
        cout<< lft[i] << '\t' << rht[i] << endl;

    }
    return 0;
}
