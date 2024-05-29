#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int A[101][101];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; j++)
        {
            if (abs(i - j) <= k || (i + j >= n + 1 - k && i + j <= n + 1 + k))
            {
                A[i][j] = 1;
            }
            else
            {
                A[i][j] = 2;
            }
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
