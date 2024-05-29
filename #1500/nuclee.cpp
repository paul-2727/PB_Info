#include <vector>
#include <stack>
#include <fstream>
using namespace std;

ifstream cin("nuclee.in");
ofstream cout("nuclee.out");

stack<int> S;
vector<int> G[1001];
vector<int> c;
int n, x, y, v[1001], L[1001], cnt, inS[1001], rez;

void tarjan(int nod)
{
    v[nod] = L[nod] = ++cnt;
    S.push(nod);
    inS[nod] = 1;
    for (auto i : G[nod])
    {
        if (!v[i])
            tarjan(i), L[nod] = min(L[nod], L[i]);
        else if (inS[i])
            L[nod] = min(L[nod], v[i]);
    }
    if (v[nod] == L[nod])
    {
        c.clear();
        while (true)
        {
            int val = S.top();
            S.pop();
            c.push_back(val);
            inS[val] = 0;
            if (nod == val)
                break;
        }
        rez++;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            cin >> y;
            G[i].push_back(y);
        }
    }
    for (int i = 1; i <= n; i++)
        if (!v[i])
            cnt = 0, tarjan(i);
    cout << rez;
    return 0;
}