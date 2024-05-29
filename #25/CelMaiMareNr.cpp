#include <iostream>
using namespace std;

int cmmnr(int n)
{
    int rez=0,cop=n,N=0;
    while (cop>0)
    {
        N++;
        cop/=10;
    }
    int v[N-1];
    for (int i = 0; i < N; i++)
    {
        v[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        rez=rez*10+v[i];
    }
    return rez;
}

int main()
{
    int n;
    cin >> n;
    cout << cmmnr(n);
    return 0;
}