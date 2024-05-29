#include<fstream>
using namespace std;

ifstream in("izolate.in");
ofstream out("izolate.out");

const int N=100+1;
int aparitii[N]={0};

int main()
{
    int n,aux;
    for (int i=1; i<=n*2; i++)
    {
        in>>aux;
        aparitii[aux]++;
    }
    aux=0;
    for (int i=1; i<=n; i++)
    {
        if (aparitii[i]==0)
        {
            aux++;
        }
    }
    out << aux << ' ';
    for (int i=1; i<=n; i++)
    {
        if (aparitii[i]==0)
        {
            out << i << ' ';
        }
    }
    in.close();
    out.close();
    return 0;
}