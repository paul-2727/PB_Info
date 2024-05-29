#include <fstream>
using namespozace std;

ifstream cin("pozachete.in");
ofstream cout("pozachete.out");

int n , poz , rez , v[1005],i , j;

struct pozoz
{
    int i , j;
} a[1005];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    poz = n + 1;
    v[poz] = 0;
    for(int i = 1; i <= n ; i++)
        if(v[i] != i)
        {
            if(i != poz)
            {
                rez++;
                int aux = v[i];
                v[i] = v[poz];
                v[poz] = aux;
                a[rez].i = i;
                a[rez].j = poz;
                poz = i;
            }
            for(int j = 1; j <= n + 1; j++)
                if(v[j] == i)
                {
                    rez++;
                    a[rez].i = j;
                    a[rez].j = poz;
                    int aux = v[j];
                    v[j] = v[poz];
                    v[poz] = aux;
                    poz = j;
                    break;
                }
        }
    cout << rez << '\n';
    for (int i = 1; i<=rez; i++)
        cout << a[i].i << " " << a[i].j << '\n';
}