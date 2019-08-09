#include <iostream>

using namespace std;
// Generate all sub arrays
//get the sum of each sub array
// see if its max or not
int main()
{
    int A[10] = {};
    int n= 0;
    int sum = 0;
    int temp = 0;
    int l = 0;
    int r =0;
    cin>> n;
    for(int i =0; i<n; i++){
        cin>>A[i];
    }

    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){
            temp = 0;
            for(int k =i; k<= j; k++){
                temp+= A[k];

            }
        if(temp>sum)
            sum = temp;
            l = i;
            r = j;
        }
    }
    cout<<"MAX sum is "<<sum<<endl;
}
