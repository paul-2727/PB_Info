#include <bits/stdc++.h>

using namespace std;

vector <int> G[100002];
vector <int> H[100002];
int n , m , x , y , S[100001] , D[100001] , c;

void dfs1(int v , int c)
{
    S[v] = c;
    for(int i : G[v])
        if(!S[i]) dfs1(i , c);
}

void dfs2(int v , int c)
{
    D[v] = c;
    for(int i : H[v])
        if(!D[i]) dfs2(i , c);
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        H[y].push_back(x);
    }

    for(int i = 1 ; i <= n ; i++)
        if(!S[i])
        {
            c++;
            dfs1(i , c);
            dfs2(i , c);
            for(int i = 1 ; i <= n ; i++)
                if(S[i] != D[i]) S[i] = D[i] = 0;
        }

    cout << c;

}