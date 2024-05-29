#include<fstream>
using namespace std;

ifstream in("izolate.in");
ofstream out("izolate.out");

const int N=100+1;
bool a[N][N]={0};

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
    int x,y;
    for(int i=1;i<=n;i++)//cream matricea corespunzatoare grafului
    {
        for (int j=1;j<=n;j++)
        {
            in >> x >> y;
            a[x][y]=a[y][x]=true;
        }
    }
    int nr=0;
    for (int i = 1; i <= n; i++)
    {
        if (nr_vecini(i) == 0)
        {
            nr++;
        }
    }
    out << nr << " ";
    for (int i = 1; i <= n; i++)
    {
        if (nr_vecini(i) == 0)
        {
            out << i << " ";
        }
    }
    in.close();
    out.close();
    return 0;
}