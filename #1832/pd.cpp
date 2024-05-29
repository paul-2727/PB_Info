#include <iostream>
using namespace std;

const int N=1000;
int n, sol[10],nd, divizori[N];
bool c[10];

void constructie_div (int n)
{
    int a=2;
    nd=0;
    while (a*a<=n)
    {
        if (n%a==0)
        {
            divizori[++nd]=a;
        }
        a++;
    }
}

void prelucrare()
{
    for (int i = n; i >= 1; i--)
    {
        if (sol[i]%2==0)
        {
            cout << "(";
        }else
        {
            cout << ") ";
        }
    }
    cout << "\n";
}

void btk(int p)
{
    if (p == 0)
    {
        prelucrare();
        return;
    }
    for (int i = n; i >= 1; i--)
    {
        if (!c[i])
        {
            sol[p] = i;
            c[i] = true;
            btk(p - 1);
            c[i] = false;
        }
    }
}


int main()
{
    cin >> n;
    constructie_div(n);
    return 0;
}