#include <fstream>

using namespace std;

ifstream cin("cerc3.in");
ofstream cout("cerc3.out");

void sort(int v[], int n) //sortare crescatoare
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

struct elem
{
    int i, j;
} v[501];

int comp(elem a, elem b)
{
    return a.j < b.j || a.j == b.j && a.i < b.i;
}

int main()
{
    int n, cnt = 0, a, b, inceput = -200;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        v[i].i = a - b;
        v[i].j = a + b;
    }
    sort(v,n);
    for (int i = 1; i <= n; i++)
        if (v[i].i > inceput)
        {
            inceput = v[i].j;
            cnt++;
        }
    cout << cnt;
}