#include <iostream>

using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i = 1; i <=x; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    int n=0;
    int r = 0;
    int nfact = 1;
    int rfact  =1;
    int fact = 1;
    cin >> n >> r;
    //compute nfactorial
    for(int cur =1; cur <= n; cur++){
        nfact = nfact * cur;
    }
    //compute r factorial
    for(int cur =1; cur <= r; cur++){
        rfact = rfact * cur;
    }
    //compute n-r factorial
    for(int cur =1; cur <= n-r; cur++){
        fact = fact * cur;
    }
    cout << nfact/(rfact * fact) << endl;

    //Using  a function
    cout << factorial(n)/(factorial(r) * factorial(n-r)) << endl;
    return 0;
}

