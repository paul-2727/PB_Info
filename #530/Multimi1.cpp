#include <iostream>
using namespace std;

const int N = 100000;
int a[N], b[N], c[N];

int main()
{
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] > b[j] )
        {
            cout << b[j++] << " ";
        }
        else if (a[i] == b[j])
        {
            c[k++] = a[i++];
        }
        else if (a[i] < b[j] )
        {
            cout << a[i++] << " ";
        }
    }
    while(i < m)
    {
        cout << a[i++] << " ";
    }
    while(j < n)
    {
        cout << b[j++] << " ";
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}