#include <iostream>

using namespace std;
int main()
{
    int n;
    bool ok=1;
    cin>>n;
    if(n<2) ok=0; ///daca e mai mic ca 2
    else if(n%2==0 && n>2) ok=0; ///daca e par si diferit de 2
    else
        for(int d=3;d*d<=n;d=d+2)
            if(n%d==0)  ///daca gasim un divizor impar
            {
                ok=0;
                break;
            }
    if(ok==1) cout<<"DA";
    else cout<<"NU";
    return 0;
}
