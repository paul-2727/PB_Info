#include <iostream>

using namespace std;

void sort(int v[], int n) //sortare crescatoare
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int n , k , a[1002] , s = 0;
    cin >> n;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    cin >> k;
    sort(a,n);
    for(int i = 0 ; i < n ; ++i)
    {
        if(i < k) a[i] = a[i] * -1;
        s += a[i];
    }
    cout << s;
    return 0;
}