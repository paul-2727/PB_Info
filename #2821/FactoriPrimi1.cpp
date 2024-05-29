#include <iostream>
using namespace std;

bool e_prim (int n)
{
    if (n < 2)
    {
        return false;
    }
    int d = 2;
    while (d*d <= n)
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
    int n,rez=1;
    cin >> n;
    for (int i=2;i<=n;i++)
    {
        bool prim=e_prim(i);
        if (prim==true)
        {
            if (n % i == 0)
            {
                rez*=i;
                n/=i;
            }
        }
    }
    cout << rez;
    return 0;
}