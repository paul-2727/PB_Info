#include <iostream>

using namespace std;
int cmmdc(int a, int b)
{
    int r, d;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    d = a;
    return d;
}
int main()
{
    int n, m, a[101][101], s = 0, smax = 0, d = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
            smax += a[i][j];
            if (i == j)
                d += a[i][j];
        }
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            s += a[i][j];
    cout << cmmdc(s, smax - s - d);
    return 0;
}
