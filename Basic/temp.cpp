#include <iostream>
#include <string>
#include <sstream>

using namespace :: std; 
int main (){


    const int arrSize = 10;

    int arr [arrSize] = {0};

    string line;
    getline(cin,line);

    stringstream ss (line);

    int i = 0;
    while ( ss>>arr[i++] && i < arrSize); 

    for (int j = 0; j<i; j++) 
        cout<<arr[j]<<" ";

    return 0;



}
