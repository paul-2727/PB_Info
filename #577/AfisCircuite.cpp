#include <iostream>
#include <vector>
using namespace std;

const int N = 100;
bool a[N + 1][N + 1];

void dfs(int v)
{
    P[v] = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        if(!P[i] && a[v][i] == 1) 
        {
            dfs(i);
        }
    }
}

int main()
{
    int nr_nod, nr_arce;
    cin >> nr_nod;
    cin >> nr_arce;
    for (int i = 0; i < nr_nod; i++)
    {
        for (int j = 0; j < nr_nod; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < nr_arce; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    GasesteCircuitele(a, nr_nod);
    return 0;
}
