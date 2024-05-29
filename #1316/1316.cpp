#include <iostream>
#include <cmath>
using namespace std;
int n;

bool e_prim(int n)
{
    if (n < 2)
    {
        return false;
    }
    int d = 2;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

bool patrat(int n)
{
    if (e_prim(sqrt(n)))
    {
        return true;
    }
    return false;
}
bool nr_div(int n)
{
    int d = 2, nr = 0;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            nr++;
        }
        d++;
    }
    return nr;
}
bool aproape(int n)
{
    int a=0, b=0, nr = 2, d = 2;
    if (nr_div(n) > 2)
    {
        while (d * d <= n)
        {
            if (n % d == 0)
            {
                if (nr == 2)
                    a = d;
                    
                else
                    b = d;
                nr--;
            }
            
            d++;
        }
    }

    if (e_prim(a) == true && e_prim(b) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    cin >> n;
    if (e_prim(n))
    {
        cout << "prim";
    }
    else if (patrat(n))
    {
        cout << "patrat prim";
    }
    else if (aproape(n))
    {
        cout << "aproape prim";
    }
    else
    {
        cout << "compus";
    }
    return 0;
}