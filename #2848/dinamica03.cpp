#include <iostream>
using namespace std;

const int mod = 777013;

int n, a[100005], b[100005];

int main()
{
    cin >> n;
    a[1] = 2, b[1] = 2;
    for (int i = 2; i <= n; i++)
    {
        a[i] = (a[i - 1] + 2 * b[i - 1]) % mod;
        b[i] = (2 * (a[i - 1] + b[i - 1])) % mod;
    }
    cout << (a[n] + b[n]) % mod;
    return 0;
}
