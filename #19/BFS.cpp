#include <iostream>
#include <fstream>
#include <vector>
#include <queue> 
using namespace std;

ifstream in("BFS.in"); 
ofstream out("BFS.out"); 

void bfs(vector<vector<int>> &graf, int start)
{
    int n = graf.size(); 
    vector<bool> vizitat(n + 1, false); 
    queue<int> q; 
    vizitat[start] = true; 
    q.push(start); 

    while (!q.empty()) 
    {
        int nod = q.front(); 
        q.pop(); 
        out << nod << " "; 

        
        for (int vecin : graf[nod])
        {
            if (!vizitat[vecin]) 
            {
                vizitat[vecin] = true; 
                q.push(vecin); 
            }
        }
    }
}

int main()
{
    int n, m, X; 
    in >> n >> m >> X; 
    vector<vector<int>> graf(n + 1); 
    for (int i = 0; i < m; ++i) 
    {
        int x, y;
        in >> x >> y;
        graf[x].push_back(y); 
        graf[y].push_back(x); 
    }
    bfs(graf, X); 
    in.close(); 
    out.close(); 
    return 0;
}
