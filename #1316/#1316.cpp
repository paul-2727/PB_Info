#include<iostream>

using namespace std;

bool prim (int n)
{
    if (n<2)
    {
        return false;
    }
    int d=2;
    while (d<=n)
    {
        if (n%d==0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n,divizori = 0;
    cin >> n;
    for (int d=1; d<=n/2; d++)
    {
        int primm=prim(d);
        if (n%d==0 && primm==true)
        {
            divizori++;
        }
    }
    if (divizori==2)
    {
        cout << "prim";
    }else if (divizori==3)
    {
        cout << "patrat prim";
    }else if (divizori==4)
    {
        cout << "aproape prim";
    }else
    {
        cout << "compus";
    }
}