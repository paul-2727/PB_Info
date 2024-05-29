#include <fstream>
using namespace std;

int a, b;
const int N = 150;
int carton[N][N];

int taie(int x, int y)
{
    int rez = 0;
    if (a <= x & b <= y)
    {
        rez = max(rez, 1 + taie(a, y - b) + taie(x - a, y));
        rez = max(rez, 1 + taie(x - a, b) + taie(x, y - b));
    }
    if (b <= x && a <= y)
    {
        rez = max(rez, 1 + taie(b, y - a) + taie(x - b, y));
        rez = max(rez, 1 + taie(x - b, a) + taie(x, y - a));
    }
    return rez;
}

ifstream cin("cartoane.in");
ofstream cout("cartoane.out");

int main()
{
    cin >> a >> b;
    cout << taie(a, b);
    cin.close();
    cout.close();
    return 0;
}