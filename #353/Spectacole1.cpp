#include <fstream>
#include <algorithm>  

using namespace std;

ifstream cin("spectacole.in");
ofstream cout("spectacole.out");

int n, cnt;
struct poz
{
    int i, j;
} a[101];

bool comp(poz a, poz b)
{
    if (a.j < b.j)
    {
        return 1;
    }
    else if (a.j == b.j && a.i < b.i)
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
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].i >> a[i].j;
    }
    sort(a + 1, a + n + 1, comp);
    int ul = a[1].j;
    for (int i = 2; i <= n; i++)
    {
        if (ul <= a[i].i)
        {
            cnt++, ul = a[i].j;
        }
    }
    cout << cnt + 1;
}