#include <iostream>
using namespace std;

int n, aux, a[100001], rez;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> aux;
        int st = 1, dr = rez;
        while (st <= dr)
        {
            int m = (st + dr) / 2;
            if (a[m] < aux)
            {
                dr = m - 1;
            }
            else
            {
                st = m + 1;
            }
        }
        if (st > rez)
        {
            a[++rez] = aux;
        }
        else
        {
            a[st] = aux;
        }
    }
    cout << rez;
}