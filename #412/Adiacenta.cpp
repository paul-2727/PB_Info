#include<fstream>
using namespace std;

const int N=100+1;
bool a[N][N]={0};

ifstream in("adiacenta.in");
ofstream out("adiacenta.out");

int main()
{
    int n,m;
    in >> n >> m;
    int x,y;
    for(int i=1;i<=m;i++)
    {
        in >> x >> y;
        a[x][y]=a[y][x]=1;
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            out << a[i][j] << " ";
        }
        out << endl;
    }
    in.close();
    out.close();
    return 0;
}