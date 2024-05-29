#include <iostream>
using namespace std;

const int modo = 30103;
const int MAX_N = 100000;

int A_N(int n)
{
    int dp[MAX_N + 1][10] = {0};
    for (int i = 0; i < 10; ++i)
    {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            for (int k = 0; k < 10; ++k)
            {
                if (j % 2 != k % 2)
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % modo;
                }
            }
        }
    }
    int rez = 0;
    for (int i = 0; i < 10; ++i)
    {
        rez = (rez + dp[n][i]) % modo;
    }
    return rez;
}

int main()
{
    int n;
    cin >> n;
    int rez = A_N(n);
    cout << rez << endl;
    return 0;
}
