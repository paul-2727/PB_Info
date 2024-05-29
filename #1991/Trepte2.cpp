#include <iostream>
using namespace std;

int a[1000001];

int main()
{
    int n, k;
    cin >> n >> k;
    a[1] = a[2] = 1;
    for (int i = 3; i <= k; i++)
    {
        a[i] = (2 * a[i - 1]) % 9001;
    }
    for (int i = k + 1; i <= n; i++)
    {
        a[i] = (2 * a[i - 1] - a[i - k - 1] + 9001) % 9001;
    }
    cout << a[n];
}