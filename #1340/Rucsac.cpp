#include <iostream>
#include <algorithm>

using namespace std;

struct obiect
{
    int greu, val;
};

int n, gmax;
obiect a[1005];

bool comp(obiect A, obiect B)
{
    return A.val * B.greu > A.greu * B.val;
}

int main()
{
    cin >> n >> gmax;
    for (int i = 1; i <= n; ++i)
        cin >> a[i].greu >> a[i].val;

    sort(a + 1, a + n + 1, comp);

    int g = 0, i = 1;
    double rez = 0;
    while (i <= n)
    {
        if (g + a[i].greu <= gmax)
        {
            g += a[i].greu;
            rez += a[i].val;
            i++;
        }
        else if (gmax - g > 0)
        {
            double factor = 1.0 * (gmax - g) / a[i].greu;
            g = gmax;
            rez += factor * a[i].val;
            i++;
        }
        else
            i = n + 1;
    }
    cout << rez;
    return 0;
}