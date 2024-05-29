#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[1001][1001] = {0};
    int dx[] = {1, 1, -1, -1};
    int dy[] = {1, -1, 1, -1};

    for (; m; m--)
    {
        int i, j, p;
        cin >> i >> j >> p;
        a[i][j] = 1;
        for (int x = 1; x <= p; x++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (i + x * dx[k] > 0 && i + x * dx[k] <= n && j + x * dy[k] > 0 && j + x * dy[k] <= n)
                {
                    a[i + x * dx[k]][j + x * dy[k]] = 1;
                }
            }
        }
    }

    int cnt = 0;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
