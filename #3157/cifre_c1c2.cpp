#include <iostream>

using namespace std;

int n, m, x[30];

int afisare()
{
    for (int i = 1; i <= n + m; i++)
        if (x[i] == -1)
            cout << n;
        else
            cout << m;
    cout << '\n';
}

int valid(int k)
{
    int c0 = 0, c1 = 0;
    for (int i = 1; i <= k; i++)
        if (x[i] == -1)
            c0++;
        else
            c1++;

    if (c0 <= m && c1 <= n)
        return 1;
    else
        return 0;
}

void back(int k)
{
    for (int i = -1; i <= 1; i += 2)
    {
        x[k] = i;
        if (valid(k))
        {
            if (k == n + m)
                afisare();
            else
                back(k + 1);
        }
    }
}

int main()
{
    cin >> n >> m;
    if (n > m)
        swap(n, m);
    back(1);
}