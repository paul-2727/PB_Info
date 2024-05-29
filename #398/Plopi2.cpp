#include <fstream>
using namespace std;

ifstream cin("plopi2.in");
ofstream cout("plopi2.out");

int n, cnt, rez, mini, x;

int main()
{
    cin >> n >> mini;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x > mini)
            cnt++, rez += x - mini;
        else if (x < mini)
            mini = x;
    }
    cout << cnt << " " << rez;
}