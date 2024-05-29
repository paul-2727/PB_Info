#include <fstream>
#include <queue>

using namespace std;

const int N = 100;

ifstream in("BFS.in");
ofstream out("BFS.out");

bool a[N+1][N+1];
int d[N+1], n;

void bfs(int x0)
{
    d[x0] = 0;
    queue <int> q;
    q.push(x0);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        out << x << " ";
        for (int y = 1; y <= n; y++)
        {
            if (a[x][y] && d[y] == -1)
            {
                d[y] = 1 + d[x];
                q.push(y);
            }
        }
    }
}

int main()
{
    int m, x0;
    in >> n >> m  >> x0;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        in >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = -1;
    }
    bfs(x0);
    in.close();
    out.close();
    return 0;
}