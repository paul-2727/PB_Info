#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> G[102];
vector<int> H[102];
int n, m, x, y, S[101], D[101], c, cnt;
struct poz
{
    int i, j;
} M[501];

void dfs1(int v, int c)
{
    S[v] = c;
    for (int i : G[v])
    {
        if (!S[i])
        {
            dfs1(i, c);
        }
    }
}

void dfs2(int v, int c)
{
    D[v] = c;
    for (int i : H[v])
    {
        if (!D[i])
        {
            dfs2(i, c);
        }
    }
}

int comp(poz a, poz b)
{
    if (a.i < b.i)
    {
        return 1;
    }
    else if (a.i == b.i && a.j < b.j)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        H[y].push_back(x);
        M[i].i = x, M[i].j = y;
    }
    sort(M + 1, M + m + 1, comp);
    for (int i = 1; i <= n; i++)
        if (!S[i])
        {
            c++;
            dfs1(i, c);
            dfs2(i, c);
            for (int i = 1; i <= n; i++)
                if (S[i] != D[i])
                    S[i] = D[i] = 0;
        }
    for (int i = 1; i <= m; i++)
    {
        if (S[M[i].i] != S[M[i].j])
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    for (int i = 1; i <= m; i++)
    {
        if (S[M[i].i] != S[M[i].j])
        {
            cout << M[i].i << " " << M[i].j << '\n';
        }
    }
    return 0;
}