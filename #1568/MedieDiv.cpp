#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double medie,s=0,nr=0;
    int decimale = 2, n;
    cin >> n;
    for (int d = 1; d <= n; d++)
    {
        if (n % d == 0)
        {
            s = s + d;
            nr++;
        }
    }
    medie = s / nr;
    cout << fixed << setprecision(decimale) << medie << endl;
    return 0;
}