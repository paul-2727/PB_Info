#include <bits/stdc++.h>
using namespace std;

int MOD = 123457;

int main()
{
    int p;
    long long int a = 5, sol1 = 1, sol2 = 1;
    cin >> p;
    int n = 5;
    if (p == 1)
        cout << 10;
    else
    {
        for (int i = 0; (1 << i) <= p; ++i)
        {
            if (((1 << i) & p) > 0)
                sol1 = (sol1 * a) % MOD;
            a = (a * a) % MOD;
        }
        sol1 = (1LL * p * sol1) % MOD;
        a = n;
        for (int i = 0; (1 << i) <= p - 1; ++i)
        {
            if (((1 << i) & (p - 1)) > 0)
                sol2 = (sol2 * a) % MOD;
            a = (a * a) % MOD;
        }
        sol2 = (1LL * sol2 * 4) % MOD;
        cout << (1LL * (sol1 + sol2)) % MOD;
    }
}