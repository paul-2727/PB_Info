#include <fstream>
using namespace std;

ifstream cin("pachete_multe.in");
ofstream cout("pachete_multe.out");

int n , p , cnt , v[100005],i , j;

struct poz
{
    int i , j;
} a[100005];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    p = n + 1;
    v[p] = 0;
    for(int i = 1; i <= n ; i++)
        if(v[i] != i)
        {
            if(i != p)
            {
                cnt++;
                int aux = v[i];
                v[i] = v[p];
                v[p] = aux;
                a[cnt].i = i;
                a[cnt].j = p;
                p = i;
            }
            for(int j = 1; j <= n + 1; j++)
                if(v[j] == i)
                {
                    cnt++;
                    a[cnt].i = j;
                    a[cnt].j = p;
                    int aux = v[j];
                    v[j] = v[p];
                    v[p] = aux;
                    p = j;
                    break;
                }
        }
    cout << cnt << '\n';
    for (int i = 1; i<=cnt; i++)
        cout << a[i].i << " " << a[i].j << '\n';
}