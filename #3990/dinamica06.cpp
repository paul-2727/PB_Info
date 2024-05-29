#include <iostream>
using namespace std;

const int nMAX = 10e3;
const int MOD = 123457;

int n;
int dp[nMAX + 1][5];

int main()
{
    cin >> n;
    dp[1][1] = dp[1][2] = dp[1][3] = dp[1][4] = 1;
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 1; j <= 4; ++j)
        {
            (dp[i][j] = dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] - dp[i - 1][j] + MOD) %= MOD;
        }
    }
    cout << (dp[n][2] + dp[n][4]) % MOD;
}