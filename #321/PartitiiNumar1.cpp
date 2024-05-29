#include <fstream>
using namespace std;

ifstream cin("partitiinumar1.in");
ofstream cout("partitiinumar1.out");

int n, x[80];

void afisare(int k)
{
    for (int i = 1; i <= k; i++)
        cout << x[i] << " ";
    cout << '\n';
}

void back(int k, int sp)
{
    for (int i = 1; i <= n; i++)
    {
        x[k] = i;
        if (k == 1 || x[k] > x[k - 1])
        {
            sp += x[k];
            if (sp <= n)
                if (sp == n)
                    afisare(k);
                else
                    back(k + 1, sp);
            sp -= x[k];
        }
    }
}

int main()
{
    cin >> n;
    back(1, 0);
}