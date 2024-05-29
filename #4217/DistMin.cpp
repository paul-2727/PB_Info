#include <iostream>
using namespace std;

const int N=10000;

int DistMin(int a[], int n, int x, int y)
{
    int p=0,p_t,p_min=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==3)
        {
            if (p_t==7 && p < p_min)
            {
                p_min=p;
            }
            p_t = a[i];
            p = 0;
        }else 
        if (a[i]==7)
        {
            if (p_t==3 && p < p_min)
            {
                p_min=p;
            }
            p_t = a[i];
            p = 0;
        }else
        {
            p++;
        }
    }
    return p_min;
}

int main()
{
    int n;
    int a[N];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << DistMin(a[N],n,3,7);
    return 0;
}