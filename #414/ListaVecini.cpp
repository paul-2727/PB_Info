#include <fstream>
using namespace std;

const int N = 100 + 1;
bool a[N][N] = {0};

ifstream in("listavecini.in");
ofstream out("listavecini.out");

int nr_vecini(int x)
{
    int nr = 0;
    for (int i = 1; i <= N; i++)
        if (a[x][i])
        {
            nr++;
        }
    return nr;
}

int main()
{
    int n;
    in >> n;
    int x, y;
    while (in >> x >> y)
    {
        a[x][y] = a[y][x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        out << nr_vecini(i) << " ";
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j])
            {
                out << j << " ";
            }
        }
        out << "\n";
    }
    in.close();
    out.close();
    return 0;
}