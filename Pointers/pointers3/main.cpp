#include <iostream>

using namespace std;
// Dereferace an Address using *
int main()
{
    int x = 10;
    int * xptr = &x;
    cout << xptr << endl;
    cout << *xptr << endl;
    cout << *xptr + 1<< endl; // Adding 1 to the value at xptr
    cout << *(xptr + 1) << endl; //Getting value at the address xptr + 1 --- Giberish

    // Double Pointers
    // int * --- datatype
    // followed by * pointer_name
    int * * xxptr = &xptr;
    cout << xxptr << endl;
    cout << *xxptr << endl;
    return 0;
}
