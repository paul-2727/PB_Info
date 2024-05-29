#include <iostream>
using namespace std;

const int N = 100;
int triunghi[N][N] = {0}, memo[N][N] = {0};

int SumTri(int triunghi[N][N], int i, int j)
{
    if (memo [i][j] !=0)
    {
        return memo[i][j];
    }

    if (i > 0 && j >= 0)
    {
        memo[i][j] = triunghi[i][j] + min(SumTri(triunghi, i + 1, j), SumTri(triunghi, i + 1, j + 1));
        return memo[i][j];
    }

    return 0;
}

int main()
{
    int n,maxj,max = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> triunghi[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (triunghi[n][j] > max)
        {
            max = triunghi[n][j];
            maxj = j;
        }
    }
    cout << SumTri(triunghi, n, maxj, n) << endl;
    return 0;
}
