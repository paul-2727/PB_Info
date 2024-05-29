#include <iostream>
using namespace std;

int n, x, a[100001], rez;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        int ok = 0;
        for (int j = 1; j <= rez && ok == 0; j++)
            if (x > a[j])
            {
                a[j] = x;
                ok = 1;
            }
        if (ok == 0)
            a[++rez] = x;
    }
    cout << rez;
}