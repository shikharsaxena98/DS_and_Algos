#include <iostream>

//using namespace std;

// A POINTER stores an address of a variable.
//Declaring a pointer variable
// ------ datatype * pointer_name
int main()
{
    int x = 10;
    int * ptr;
    ptr = &x;

    char y = 'A';
    char * ptr2 = &y;
    // This works
    std::cout << ptr << std::endl;
    // this prints charecter as the type char * when inputed to cout
    // prints the charecter
    std::cout << ptr2 << std::endl;
    std::cout << (int *)ptr2 << std::endl;
    return 0;
}
