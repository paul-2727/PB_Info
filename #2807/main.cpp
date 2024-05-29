#include <iostream>
using namespace std;
int n, m, a[51][51], i1, j1, i2, j2, min1 = 10000, min2 = 10000;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
    for (int i = 1; i <= n; ++i)
    {
        if (a[i][1] < min1)
            min1 = a[i][1], i1 = i, j1 = 1;
        if (a[i][m] < min2)
            min2 = a[i][m], i2 = i, j2 = m;
    }
    swap(a[i1][j1], a[i2][j2]);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
