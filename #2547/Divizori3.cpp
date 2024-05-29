#include <iostream>
using namespace std;

bool e_prim (int n)
{
    if (n < 2)
    {
        return false;
    }
    int d = 2;
    while (d*d<=n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int a,b,rez=0;
    cin >> a >> b;
    for (int i = 1;i*i<b;i++)
    {
        bool prim=e_prim(i);
        if (prim==true && i*i>a)
        {
            rez++;
        }
    }
    cout << rez;
    return 0;
}