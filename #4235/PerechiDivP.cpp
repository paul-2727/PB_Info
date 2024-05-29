#include <iostream>
using namespace std;

long long PerechiDivP(int a[], int n, int p)
{
    int nr[1000]={0};
    long long nr_perechi = 0;
    for (int i=0; i<n; i++)
    {
        int r = a[i] % p; 
        int rc = p-r;
        if (rc==p)
        {
            rc=0;
        }
        nr_perechi += nr[rc];
        nr[rc]++;
    }
    return nr_perechi;
}

int main()
{
    int n,p;
    cin >> n >> p;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << PerechiDivP(a,n,p) << endl;
    return 0;
}