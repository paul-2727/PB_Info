#include <iostream>
using namespace std;

const int N = 1000;
int g[N]={0},p[N]={0};

int rucsac (int v[], int g[], int n, int greutate) 
{
    int dp[n + 1][greutate + 1]={0};
    for (int i = 0; i <= n; ++i) 
    {
        for (int j = 0; j <= greutate; ++j) 
        {
            if (i == 0 || j == 0) 
            {
                dp[i][j] = 0;
            } 
            else if (g[i - 1] <= j) 
            {
                dp[i][j] = max(v[i - 1] + dp[i - 1][j - g[i - 1]], dp[i - 1][j]);
            } 
            else 
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][greutate];
}

int main() 
{
    int n,greutate,rez;
    cin >> n >> greutate;
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
        cin >> p[i];
    }
    rez = rucsac(g,p,n,greutate);
    cout << rez;
    return 0;
}
