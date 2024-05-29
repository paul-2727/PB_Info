#include <fstream>
using namespace std;

ifstream cin("componenteconexe.in");
ofstream cout("componenteconexe.out");

int n, m, a[101][101], x, y, P[101];

void dfs(int v, int component)
{
    P[v] = component;
    for (int i = 1; i <= n; i++)
    {
        if (!P[i] && a[v][i] == 1)
        {
            dfs(i, component);
        }
    }
}

int main()
{
    cin >> n;
    while (cin >> x >> y)
    {
        a[x][y] = a[y][x] = 1;
    }
    int numarComponente = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!P[i])
        {
            numarComponente++;
            dfs(i, numarComponente);
        }
    }
    cout << numarComponente << "\n";
    for (int i = 1; i <= numarComponente; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (P[j] == i)
                cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
