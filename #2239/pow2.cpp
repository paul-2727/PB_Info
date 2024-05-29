#include <iostream>
using namespace std;
const int N = 100001;
int a[N];

int main()
{
    int n, nr=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {   
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int p = 1;
            while (a[i] + a[j] > p)
            {
                p *= 2;
            }
            if (a[i] + a[j] == p)
                nr++;
        }
    }
    cout << nr;
    return 0;
}