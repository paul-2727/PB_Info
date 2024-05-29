#include <iostream>
using namespace std;

const int N=100+1;
bool a[N][N]={0};

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin >>a[i][j];
        }
    }
    bool adiacenta=true;
    for (int i= 1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (a[i][j]!=a[j][i])
            {
                adiacenta=false;
            }
        }
    }
    cout << adiacenta;
    return 0;
}