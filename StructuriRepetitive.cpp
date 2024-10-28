#include <iostream>

using namespace std;

int main()
{
    /*

        int n;
        cin>>n;
        while(n>0)
        {
            ...
            n--;
        }

        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            ...
        }

        for(zona 1; zona 2; zona 4)
        {
            zona 3;
        }

        int n;
        cin>>n;
        while(n>0)
        {
            //...
            n=n/10;
        }

        int n;

        for(cin>>n;n>0;n=n/10)
        {
            //n%10...
        }

        zona 1 - instructiuni declarative
        zona 2 - conditie
        zona 3 - instructiuni
        zona 4 - instructiuni, folosita pentru a ne apropia de negatia conditiei


    */

    int n;
    /*for(cin>>n;n>0;n--)
    {
        cout<<n<<" ";
    }*/
    //a,b; cu a<b b-a+1
    //a,b; cu a<b (b-a)/d+1
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b*a;i=i+a)
    {
        cout<<i<<" ";
    }

    return 0;
}
