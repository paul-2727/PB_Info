#include <iostream>
using namespace std;

int nrmaxim(int n)
{
    int rez = 0, x = 0, cop_n = n;
    while (cop_n > 0)
    {
        x++;
        cop_n /= 10;
    }
    for (int i = 0; i < x; i++)
    {
        if (rez < n)
        {
            rez = n;
        }
        n = n % 10e(x - 1) + 10ex*(n % 10);
    }
    return rez;
}

int main()
{

    return 0;
}