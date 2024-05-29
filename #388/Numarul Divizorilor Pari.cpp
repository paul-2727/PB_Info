#include <iostream>
using namespace std;

int nr_div (int n)
{
    int d=1,nr=0;
    while (d<=n)
    {
        if (n%d==0)
        {
            nr++;
        }
        d++;
    }
    return nr;
}

int main()
{
    int n;
    cin >> n;
    n/=2;
    int nr=nr_div(n);
    cout << nr;
    return 0;
}