#include <iostream>

using namespace std;

int main()
{
    int nr,cmax=0,nmax=0;
    cin>>nr;
    for(int i=1; i<=nr; i++)
    {
        int n=i,d=2,cnt=1;
        while(n>1)
        {
            if(n%d==0)
            {
                int e=0;
                while(n%d==0)
                {
                    e++;
                    n=n/d;
                }
                cnt=cnt*(e+1);
            }
            d++;
            if(d*d>n) d=n;
        }
        if(cmax<cnt)
        {
            cmax=cnt;
            nmax=i;
        }

    }
    cout<<nmax;
    return 0;
}
