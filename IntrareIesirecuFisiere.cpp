#include <fstream>
using namespace std;

ifstream fin("nume.in"); 
ofstream fout("nume.out");

int main()
{
    int a,b;
    fin>>a>>b;

    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }

    if(a==1) fout<<"PIE";
    else fout<<"NOPIE";


    return 0;
}
