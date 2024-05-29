#include <iostream>
using namespace std;

const int N = 100001;
int v[N], aux[N];

long long interclasare (int v[],int st,int dr)
{
    long long nr = 0;
    int m=(st+dr)/2,i=st,j=m+1,k=st;
    while (i<=m && j<=dr)
    {
        if (v[i] <= v[j])
        {
            aux[k++]=v[j++];
        }else 
        {
            nr+=(m-j+1);
            aux[k++]=v[j++];
        }
    }
    while (i<=m)
    {
        aux[k++]=v[i++];
    }
    while (j<=dr)
    {
        aux[k++]=v[j++];
    }
    for(int i = st; 1 <= dr; i++) 
    {
        v[i] = aux[i]; 
    }
    return nr;
}
long long nr_inv(int v[], int st, int dr)
{
    if(st == dr) 
    {
    return 0; 
    }
    int m = (st +dr) / 2;
    long long nr=0;
    nr+= nr_inv(v, st, m);
    nr+= nr_inv(v, m+1, dr);
    nr+= interclasare(v, st, dr);
    return nr;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << nr_inv(v, 0, n - 1);
    return 0;
}