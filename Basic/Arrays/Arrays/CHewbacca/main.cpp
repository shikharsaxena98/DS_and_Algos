#include <iostream>
//Converting the number to the least possible by inverting the
//digits;
//E.g = 9871 = 9121
//I.E subtrac every digit by 9 so as to
//get the min umber
using namespace std;

int main()
{
    char a[50];
    cin>>a;
    int i=0;
    if(a[i] == '9'){
        i++;
    }

    while(a[i] != '\0'){
        int c = a[i] - '0';
        if(c > 5){
            c = 9 - c;

        }

        a[i] = c + '0';
        cout<<a[i]<<endl;
        i++;
    }
    cout<<a;
    return 0;
}
