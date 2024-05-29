#include <iostream>
using namespace std;

const int N=100+1;
bool a[N][N]={0};

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;
    int muchii=0;
    for (int i=0; i<m; i++)
    {
        cin >> x >> y;
        if (x/k != 0 && y / k != 0)
        {
            muchii++;
        }
    }
    cout << muchii;
    return 0;
}