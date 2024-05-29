#include <iostream>
#include<fstream>

using namespace std;

ifstream in("permutari.in");
ofstream out("permutari.out");

int n, sol[10];
bool c[10];

void prelucrare()
{
    for (int i = 1; i <= n; i++)
    {
        out << sol[i] << " ";
    }
    out << "\n";
}

void btk (int p)
{
    if (p - 1 == n)
    {
        prelucrare();
        return;
    }
    for (int i=1; i<=n; i++)
    {
        if (!c[i])
        {
            sol[p] =i;
            c[i] = true;
            btk(p+1);
            c[i] = false;
        }
    }
}

int main()
{
    in >> n;
    btk(1);
    in.close();
    out.close();
    return 0;
}