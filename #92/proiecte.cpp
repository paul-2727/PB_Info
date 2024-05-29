#include <fstream>

using namespace std;

ifstream in("proiecte.in");
ofstream out("proiecte.out");

const int MAX_N = 1000;

int n;
int t[MAX_N], aux[MAX_N];

void sortare(int v[], int n)
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
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> t[i];
        aux[i] = t[i];
    }
    sortare(aux, n);
    int j = 0;
    while (j < n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (t[i] == aux[j])
            {
                out << i + 1 << " ";
            }
        }
        j++;
    }
    in.close();
    out.close();
    return 0;
}