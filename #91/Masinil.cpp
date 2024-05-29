#include <fstream>

using namespace std;

ifstream in("masini.in");
ofstream out("masini.out");

const int MAX_N = 1000; 

int n, total;
int t[MAX_N]; 

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
    int rez = 0;
    in >> n >> total;

    for (int i = 0; i < n; i++)
    {
        in >> t[i];
    }

    sortare(t, n);

    int i = 0;
    while (i < n && total - t[i] >= 0) 
    {
        total -= t[i];
        i++;
        rez++;
    }

    out << rez;
    in.close();
    out.close();
    return 0;
}
