#include <iostream>
using namespace std;

const int NMAX = 1e3 + 1;
const int MOD = 123457;

int dp1[NMAX], dp2[NMAX][2], dp3[NMAX][NMAX];

int main()
{
    int n, p;
    cin >> n >> p;
    dp1[1] = 52;
    dp2[1][1] = dp2[1][0] = 26;
    dp3[1][0] = 21;
    dp3[1][1] = 5;
    for (int i = 2; i <= n; i++)
    {
        dp1[i] = dp1[i - 1] * 50 % MOD;
        dp2[i][1] = dp2[i - 1][0] * 26 % MOD;
        dp2[i][0] = (dp2[i - 1][1] + dp2[i - 1][0]) * 26 % MOD;
        dp3[i][0] = dp3[i - 1][0] * 21 % MOD;
        for (int v = 1; v <= p; v++)
        {
            dp3[i][v] = (dp3[i - 1][v] * 21 + dp3[i - 1][v - 1] * 5) % MOD;
        }
    }
    int ans = 0;
    for (int i = 0; i <= p; i++)
    {
        ans += dp3[n][i];
        ans %= MOD;
    }
    cout << dp1[n] << " " << (dp2[n][1] + dp2[n][0]) % MOD << " " << ans << endl;

    return 0;
}