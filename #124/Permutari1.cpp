#include <iostream>
#include <fstream>

using namespace std;

ifstream in("permutari1.in");
ofstream out("permutari1.out");

int n, sol[10];
bool c[10];

void prelucrare()
{
    for (int i = n; i >= 1; i--)
    {
        out << sol[i] << " ";
    }
    out << "\n";
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
    in >> n;
    btk(n);
    in.close();
    out.close();
    return 0;
}