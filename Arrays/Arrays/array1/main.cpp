#include <iostream>

using namespace std;

int linear_search(int arr[], int num, int n){
    int i = 0;
    for(int i = 0; i<n/2; i++){
        if(arr[i] == num){
            cout<<" num at "<< i;
            break;
        } else if(arr[n-1-i] == num){
            cout<<" num at "<< n-1-i;
            break;
        }

        if(i ==n/2){
        cout << "Number not found";
    }

    }

    return 0;
}

int main()
{
    int A[10] = {0};
    int n =  0;
    int num = 0;
    int i =0;
    cin>>n;
    cin>>num;
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }

    for(int i =0;i<n;i++ ){
        if(A[i] == num){
                cout << "Number at "<< i<<endl;
                break;
        }

        if(i == n-1){
        cout<< "Number not found"<<endl;
    }
    }

    linear_search(A, num, n);
    return 0;
}
