#include <fstream>
using namespace std;

ifstream cin("subsecv.in");
ofstream cout("subsecv.out");

int n, x, a[10005], st, dr;
bool gasit = false;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x % 7;
    }
    for (int i = 0; i < n && !gasit; i++)
    {
        for (int j = i; j < n && !gasit; j++)
        {
            if ((a[i] + a[j]) % 7 == 0)
            {
                cout << i + 1 << " " << j + 1;
                gasit = true;
            }
        }
    }
    return 0;
}