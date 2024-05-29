#include <iostream>

using namespace std;
int main()
{
    int n, m, a[101][101];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            a[i][j] = n - j + 1;

    for (int i = 1; i <= n; ++i)
        a[i][i] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
