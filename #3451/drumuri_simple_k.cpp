#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 20;
bool graf[MAX_N][MAX_N];
bool vizitat[MAX_N];
int drum[MAX_N];
int n, m, k;

void DFS(int nod, int pas)
{
    if (pas == k)
    {
        for (int i = 0; i < pas; i++)
        {
            cout << drum[i] << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        for (int nod_nevizitat = 1; nod_nevizitat <= n; nod_nevizitat++)
        {
            if (graf[nod][nod_nevizitat] && !vizitat[nod_nevizitat])
            {
                vizitat[nod_nevizitat] = true;
                drum[pas] = nod_nevizitat;
                DFS(nod_nevizitat, pas + 1);
                vizitat[nod_nevizitat] = false;
            }
        }
    }
}

int main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graf[x][y] = true;
    }
    for (int nod = 1; nod <= n; nod++)
    {
        vizitat[nod] = true;
        drum[0] = nod;
        DFS(nod, 1);
        vizitat[nod] = false;
    }
    return 0;
}
