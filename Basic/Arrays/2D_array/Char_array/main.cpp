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
    cin.get(e, 20); //input "hello world"
    cout<<e<<endl;

    char f[30];
    cin.getline(f, 30);
    cout<< f<<endl;

    // 2D char array

    char two[][3] = {{'A', 'B', 'C'},
	    	     {'D', 'E', 'F'}
    		    };

    std::cout<<two<<'\n';
    std::cout<<two[0]<<'\n';
    std::cout<<two[0][0]<<'\n';

    return 0;
}
