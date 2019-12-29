#include <iostream>
// MAX sub_array Sum using Kadanes algo
using namespace std;

int main()
{
    int A[10] = {0};
    int n= 0;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> A[i];
    }

    //KADANES ALGO : Complexity + O(N)
    int curr_sum = 0;
    int max_sum = 0;
    for(int j = 0; j<n; j++){
        if((curr_sum + A[j]) < 0)
            curr_sum = 0;
        else
            curr_sum += A[j];

        if(curr_sum> max_sum)
            max_sum = curr_sum;
    }

    cout << max_sum<<endl;
    return 0;
}
