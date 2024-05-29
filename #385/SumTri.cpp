#include <iostream>
using namespace std;

const int N = 100;
int triunghi[N][N] = {0}, memo[N][N] = {0};

int SumTri(int triunghi[N][N], int i, int j, int aux)
{
    if (memo[i][j] != 0)
    {
        return memo[i][j];
    }
    
    if (i < aux && j <= aux)
    {
        memo[i][j] = triunghi[i][j] + max(SumTri(triunghi, i + 1, j, aux), SumTri(triunghi, i + 1, j + 1, aux));
        return memo[i][j];
    }
    
    return 0; 
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> triunghi[i][j];
        }
    }
    cout << SumTri(triunghi, 0, 0, n) << endl;
    return 0;
}
