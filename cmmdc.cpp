#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y;
    cin>>a>>b;
    x=a,y=b;
    /*while(a!=b)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    cout<<a;*/

    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<a<<" ";  ///cel mai mare divizor comun

    cout<<x*y/a; ///cel mai mic multiplu comun

    return 0;
}
