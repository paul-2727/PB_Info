#include <iostream>
using namespace std;

const int N=1000;
int v[N];

int cautare_binara(int st,int dr,int x)
{
    int rez=st-1;
    while (st<=dr)
    {
        int m=(st+dr)/2;
        if (v[m]<x)
        {
            rez=m;
            st=m+1;
        }else
        {
            dr=m-1;
        }
    }
    return rez;
}

int main()
{
    int n,rez=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
                if (v[i] > v[j])
                {
                    int aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
        }
    }
    for (int i = 0; i+2 < n; i++)
    {
        for (int j = i+1; j+1 < n; j++)
        {
            int k=cautare_binara(j+1,n-1,v[i]+v[j]);
            if (v[i]+v[j]>k)
            {
                cout << v[i] << ' ' << v[j] << ' ' << v[k]<< endl;
            }
        }
    }
    cout << rez;
    return 0;
}