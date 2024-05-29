#include <iostream>
using namespace std;
int n, m, x, a[101][101], ok;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
    cin >> x;
    for (int i = 1; i <= n; ++i)
        if (a[i][1] == x || a[i][m] == x)
            ok = 1;
    for (int j = 1; j <= m; ++j)
        if (a[1][j] == x || a[n][j] == x)
            ok = 1;
    if (ok == 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
