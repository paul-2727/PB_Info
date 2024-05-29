#include <iostream>

using namespace std;
int main()
{
    int n, m, ind = 0;
    cin >> n;
    int a[100][100];
    int v[100];
    int p = 0;
    while (n)
    {
        a[6][++ind] = n % 10;
        n /= 10;
    }
    for (int i = ind; i >= 1; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            a[i][j] = a[i + 1][j];
        }
        for (int j = i + 1; j <= 6; ++j)
        {
            a[i][j] = a[i + 1][i];
        }
    }
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
