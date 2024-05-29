#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("kprim.in");
ofstream fout("kprim.out");

int e_prim (int n)
{
    int aux = 0;
    for(int d = 2; d <= n / 2; d++)
    {
        if(n % d == 0)
        {
            aux = 1;
        }
    }
    return aux;
}

int main()
{
    ifstream in("test.in");
    ofstream out("test.out");
    int k,nr = 0,anterior = 0;
    in >> k;
    int v[k];
    for (int i=0;i<k;i++)
    {
        int nr=2;
        if (nr > anterior && nr > anterior)
        {
            v[i]=nr;
            anterior=nr;
        }
    }
    for (int i=0;i<k;i++)
    {
        out << v[i];
    }
    in.close();
    out.close();
    return 0;
}