#include <iostream>

using namespace std;

const int N = 25000;

int v[N];

int main()
{
    int n, q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int st = 0, dr = n - 1;
        bool gasit  = false;
        while (st <= dr && !gasit)
        {
            int m = (st + dr) / 2;
            if (x < v[m])
            {
                dr = m - 1;
            }
            else if (x > v[m])
            {
                st = m + 1;
            }
            else
            {
                gasit = true;
            }
        }
        cout << gasit << " ";
    }
    return 0;
}