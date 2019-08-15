#include <iostream>
#include <cstring>  //required
using namespace std;

int main()
{
    char str[] = "Hi Myself Mayank kapur";
    char *ptr = strtok(str, " ");
    cout<< ptr<<endl;
    while(ptr != NULL){
    ptr = strtok(NULL, " ");
    cout<< ptr<<endl;
    }
    return 0;
}
