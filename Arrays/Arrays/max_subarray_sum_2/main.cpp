#include <iostream>
// Using cumulative sum to calculate the max subarray sum
// or efficient computation
// Calculating cumulative sum array:
// Csum[i] = A[i] + Csum[i-1]
using namespace std;

int main()
{
    int A[10]= {0};
    int Csum[10] = {0};
    int n=0;
    int sum=0;
    int temp = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> A[i];
        if(i == 0)
            Csum[i] = A[i];
        else
            Csum[i] = A[i] + Csum[i-1];
    }

    cout<< "Array :"<<endl;
    for(int i = 0; i<n; i++){
        cout<< A[i]<<',';
    }

    cout<< '\n';
    cout<< "Cumulative array:" << endl;
    for(int i = 0; i<n; i++){
        cout<< Csum[i]<<',';
    }
    cout<< endl;

    for(int i=0; i<n; i++){

        for(int j=i; j<n; j++){
            temp = 0;
            if(i ==0)
                temp = Csum[j];
            else
                temp = Csum[j]- Csum[i-1];


            if(temp > sum){
                sum = temp;
        }
    }
    }
    cout <<"Sum: "<< sum<< endl;
    return 0;
}
