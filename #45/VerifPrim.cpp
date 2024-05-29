#include <iostream>
using namespace std;

int main()
{
    int n,prim=0;
    cin >> n;
    if (n<2)
    {
        prim=1;
    }
    int d=2;
    while (d*d<=n)
    {
        if (n%d==0)
        {
            prim=1;
        }
        d++;
    }
    if (prim==0)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}