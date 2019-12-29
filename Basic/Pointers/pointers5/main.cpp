#include <iostream>

using namespace std;

int main()
{
    int x[] = {10, 20, 30, 40};
    int * ptr = &x[0];
    cout<< &x << endl;
    cout<< x << endl;
    cout << (x + 1)<<endl;
    cout << *(ptr + 1)<<endl;
    cout<< &x + 1 <<endl;

}
