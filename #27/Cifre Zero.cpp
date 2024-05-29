#include <iostream>
using namespace std;

int nr_cif_zero (int n)
{
    int nr=0;
    while (n>0)
    {
        if (n%10 == 0)
        {
            nr++;
        }
        n/=10;
    }
    return nr;
}

int main()
{
    
    return 0;
}