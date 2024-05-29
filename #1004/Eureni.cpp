#include <fstream>

using namespace std;
ifstream cin("eureni.in");
ofstream cout("eureni.out");
int main()
{
    int s, m, e, cnt1 = 0;
    cin >> s >> m >> e;
    long long max = 1;
    while (m)
        max *= e, m--;
    for (int i = 1; max / e; ++i)
    {
        int cnt = 0;
        while (s >= max)
        {
            s -= max;
            cnt++;
        }
        if (cnt != 0)
            cout << max << ' ' << cnt << endl;
        cnt1 += cnt;
        max /= e;
    }
    if (s != 0)
        cout << 1 << ' ' << s << endl;
    cout << cnt1 + s;
    return 0;
}