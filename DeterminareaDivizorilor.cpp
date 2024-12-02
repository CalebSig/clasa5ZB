#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int d=2;d*d<=n;d++)
        if(n%d==0)
        {
            //... lucram cu diviziorul d
            // if(d*d!=n) //... lucram cu div n/d
        }
    return 0;
}
