#include <fstream>
using namespace std;

ifstream cin("subsecv.in");
ofstream cout("subsecv.out");

int n, x, a[10005], st, dr;
bool gasit = false;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i] = (a[i - 1] + x % n) % n;
    }
    for (int i = 1; i <= n && !gasit; i++)
    {
        for (int j = i; j <= n && !gasit; j++)
        {
            if ((a[j] - a[i - 1]) == 0)
            {
                st = i, dr = j, gasit = 1;
            }
        }
    }
    cout << st << ' ' << dr;
    return 0;
}