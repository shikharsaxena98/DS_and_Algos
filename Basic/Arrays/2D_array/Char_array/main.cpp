#include <iostream>

using namespace std;

int main()
{
    char a[] = {'a', 'b', 'c', 'd'}; //has garbage value at the end
    cout << a << endl;
    cout <<sizeof(a) << endl;


    char b[] = {'a', 'b', 'c', 'd', '\0'}; // No garbage value at thhe end
    cout << b << endl;
    cout << sizeof(b) << endl;

    char c[] = "hello";
    cout << c<< endl;

    char d[] = {'\0', 'a', 'b', 'c', 'd'}; // NO OUTPUT
    cout << d<<endl;

    char e[20];
    cin.get>> e; //input "hello world"
    cout<<e<<endl;

    char f[30];
    cin.getline(f, 30);
    cout<< f<<endl;



    return 0;
}
