#include <fstream>
using namespace std;

ifstream cin("conex.in");
ofstream cout("conex.out");

int n , m , a[101][101] , x , y , p[101];

void dfs(int v)
{
    p[v] = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        if(!p[i] && a[v][i] == 1) 
        {
            dfs(i);
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
    dfs(1);
    bool e_conex = true;
    for (int i = 1; i <= n; i++)
    {
        if (p[i]==0)
        {
            e_conex= false;
        }
    }
    if (e_conex)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }
    return 0;
}