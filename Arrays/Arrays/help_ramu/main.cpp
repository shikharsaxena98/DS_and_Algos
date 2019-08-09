#include <iostream>

using namespace std;

int main()
{
    int c1, c2, c3, c4;
    int r,c;
    int rick[1000];
    int cab[1000];
    int Rcost , Ccost = 0;
    cin>> c1>> c2>> c3>> c4;
    cin>> r>>c;
    for(int i=0; i<r; i++){
        cin>>rick[i];
    }

    for(int i=0; i<c; i++){
        cin>>cab[i];
    }

    for(int i=0; i<r; i++){
        Rcost += min(c1*rick[i], c2);
    }

    for(int i=0; i<c; i++){
        Ccost += min(c1*cab[i], c2);
    }


    Rcost = min(Rcost, c3);
    Ccost = min(Ccost, c3);

    int fval = min(c4, Rcost + Ccost);

    cout << fval << endl;
    return 0;
}
