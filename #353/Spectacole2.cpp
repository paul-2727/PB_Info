#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("spectacole.in");
ofstream cout("spectacole.out");

int n, cnt;
pair<int, int> a[101];

bool compara(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
    {
        return true;
    }
    else if (a.second == b.second && a.first < b.first)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    int ul = a[1].second;
    for (int i = 2; i <= n; i++)
    {
        if (ul <= a[i].first)
        {
            cnt++;
            ul = a[i].second;
        }
    }
    cout << cnt + 1;
    cin.close();
    cout.close();
}

