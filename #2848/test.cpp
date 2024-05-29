#include <iostream>
using namespace std;

const int mod = 777013;
const int maxn = 100000;

int n;
int a[maxn], b[maxn];

int calculateB(int i);

int calculateA(int i)
{
    if (a[i] != 0)
    {
        return a[i];
    }
    a[i] = (calculateA(i - 1) + 2 * calculateB(i - 1)) % mod;
    return a[i];
}

int calculateB(int i)
{
    if (b[i] != 0)
    {
        return b[i];
    }
    b[i] = (2 * (calculateA(i - 1) + calculateB(i - 1))) % mod;
    return b[i];
}

int main()
{
    cin >> n;
    a[1] = b[1] = 2;
    cout << (calculateA(n) + calculateB(n)) % mod;
    return 0;
}