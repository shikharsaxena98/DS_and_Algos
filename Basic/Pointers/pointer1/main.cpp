#include <iostream>
// COUT doesnt work with the char address to print address
// instead prints charecter itself
// to print address char * has to be converted to void* or int * using typecasting
int main()
{
    int x = 10;
    std::cout << &x <<'\n';

    float y = 10.5;
    std::cout<< &y <<'\n';
// pointer doesnt work on charecters
// due to operator overloading
    char c = 'A';
    std::cout<< &c <<'\n';
// Using typecasting from char * to void *
// to get teh address of char as a void pointer
    std::cout<< (void *)&c <<'\n';
    return 0;
}
