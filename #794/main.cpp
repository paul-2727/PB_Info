#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p = 0, j, k, a[30][30];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (j = 1; j <= n; ++j)
            cin >> a[i][j];
    for (k = 1; k <= 2 * n - 1; ++k)
    {
        if (k > n)
            p++;
        if (k % 2 == 0)
            for (j = k - p; j > p; j--)
                cout << a[j][k + 1 - j] << " ";
        else
            for (j = p + 1; j <= k - p; ++j)
                cout << a[j][k + 1 - j] << " ";
    }
    return 0;
}
