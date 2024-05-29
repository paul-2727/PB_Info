#include <iostream>
using namespace std;

const int N=100001;
int a[N],b[N],r[N+N];

int main()
{
    int m,n;
    cin >> m;
    for (int i=0; i<m; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            r[k++]= a[i];
        }
        i++;
        j++;
    }
    int lin=0
    for (int i=0; i<k; i++)
    {
        cout << r[i]
        lin++;
        if (lin == 10)
        {
            cout << "\n";
        }else
        {
            cout << " ":
        }
    }
    return 0;
}