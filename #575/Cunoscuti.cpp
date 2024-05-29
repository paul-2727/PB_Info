#include <iostream>
#include <vector>

using namespace std;

const int N = 100;
bool a[N + 1][N + 1];
int out[N + 1];

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
    int grad_out_max = 0; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            out[i] += a[j][i];//gradele exterioare ale punctelor
        }
        grad_out_max = max(grad_out_max, out[i]);//gasim val maxima
    }
    for (int i = 1; i <= n; i++)
    {
        if (out[i] == grad_out_max)// afisam crescator punctele care au val max
        {
            cout << i << " ";
        }
    } 
    return 0;
}
