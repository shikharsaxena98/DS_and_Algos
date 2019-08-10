#include <iostream>

using namespace std;
void increment(int a){
    a = a+1;
    cout<< "In function (passed by value): "<< a<<endl;
}

void inc_ref(int * aptr){
    *aptr = *aptr +1;
}

int main()
{
    int a = 10;
    int * aptr = &a;
    cout<< "main: "<< a<< endl;
    increment(a);
    inc_ref(aptr);
    cout<< "After call by ref: "<< a<<endl;
    return 0;
}
