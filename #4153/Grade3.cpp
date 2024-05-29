#include <iostream>
#include <vector>

using namespace std;

const int N = 100;
bool a[N + 1][N + 1];
int in[N + 1], out[N + 1];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    int nr_noduri = 0; // nr de noduri care au gradul exterior mai mic decât gradul interior
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            in[i] += a[i][j];
            out[i] += a[j][i];
        }
        if (in[i] < out[i])
        {
            nr_noduri++; // numaram cate noduri au gradul exterior mai mic decât gradul interior
        }
    }
    cout << nr_noduri << endl;
    for (int i = 1; i <= n; ++i)
    {
        if (in[i] < out[i]) // afisam nodurile care au gradul exterior mai mic decât gradul interior
        {
            cout << i << " ";
        }
    }
    return 0;
}
