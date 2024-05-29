#include <iostream>
using namespace std;

int main()
{
    int n, min=10000,max=0,rez=0,aux=0;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] < min)
        {
            min = x[i];
        }
        cin >> y[i];
        if (y[i] > max)
        {
            max = y[i];
        }
    }
    int copy = min;
    for (int i = 0; i < max-min; i++)
    {
        if (aux >rez )
        {
            rez=aux;
        }
        aux=0;
        for (int j = 0; j < n; j++)
        {
            if (x[j] = copy && x[j] < y[j])
            {
                aux++;
                x[j]++;
            }
        }
    }
    cout << rez;
    return 0;
}