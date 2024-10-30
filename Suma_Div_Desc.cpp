#include <iostream>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    if(p==1)
    {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            if(x%2==0) cnt++;
        }
        cout<<cnt<<" "<<n-cnt;
    }
    else
    {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            int s=1,d=2; //suma div cu desc in factori primi
            while(x>1)
            {
                if(x%d==0)
                {
                    int e=0;
                    while(x%d==0)
                    {
                        e++;
                        x=x/d;
                    }
                    e++;
                    int q=1;
                    while(e>0)
                    {
                        q=q*d;
                        e--;
                    }
                    s=s*(q-1)/(d-1);
                }
                d++;
                if(d*d>x) d=x;
            }
            if(s%2==0) cnt++;
        }
        cout<<cnt<<" "<<n-cnt;
    }
    return 0;
}
