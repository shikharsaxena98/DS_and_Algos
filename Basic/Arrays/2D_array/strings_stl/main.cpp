#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s("Hello World");
    cout<< s<< endl;

    string s1 = "Another way0";
    cout<< s1 << endl;

    string s3;
    getline(cin, s3);
    cout<<s3<<endl;

// getline works only for string objects.
// For chararcter array cin, cin.getline, cin.get()
//  char c[100];
//  'getline(cin, c);'
//  cout<< c<<endl;

    string arr[] = {"Apple", "Hello boy", "Yo Bro"};
    for(int i=0; i<3; i++){
        cout<< arr[i]<<endl;
        cout<< arr[i].length()<<endl;
        for(int j =0; j<arr[i].length(); j++){
            cout<< arr[i][j]<< "-";
        }
        cout<<endl;
    }
    return 0;

}
