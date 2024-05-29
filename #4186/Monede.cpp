#include <iostream>
using namespace std;

const int N=100;
int monede[N];

int ModalitatiDePlata(int suma,int n, int monede[])
{
    int rez=0;
    for (int i=n-1;i>=0;i--)
    {
        int aux=monede[i],j=n-1;
        while (aux<suma && j>=0)
        {
            if (aux+monede[j]<=suma)
            {
                aux+=monede[j];
            }
            else
            {
                j--;
            }
        }
        if (aux==suma)
        {
            rez++;
        }
    }
    return rez;
}

int main()
{
    int suma,n;//suma care trebuie achitata
    cin >> suma >> n;
    for (int i=0;i<n;i++)
    {
        cin >> monede[i];//valorile monedelor
    }
    cout << ModalitatiDePlata(suma,n,monede);
    return 0;
}