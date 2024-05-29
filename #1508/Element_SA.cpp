#include <iostream>
using namespace std;
bool maximcol(int a[100][100], int n, int m, int i, int j)
{
    for (int k = 0; k < n; k++)
    {
        if (a[i][j] < a[k][j])
        {
            return false;
        }
    }
    return true;
}
bool maximlinie(int a[100][100], int n, int m, int i, int j)
{
    for (int k = 0; k < m; k++)
    {
        if (a[i][j] < a[i][k])
        {
            return false;
        }
    }
    return true;
}
bool minimcol(int a[100][100], int n, int m, int i, int j)
{
    for (int k = 0; k < n; k++)
    {
        if (a[i][j] > a[k][j])
        {
            return false;
        }
    }
    return true;
}
bool minimlinie(int a[100][100], int n, int m, int i, int j)
{
    for (int k = 0; k < m; k++)
    {
        if (a[i][j] > a[i][k])
        {
            return false;
        }
    }
    return true;
}
int nr_sa(int a[100][100], int n, int m)
{
    int rapsunsuri[m];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((maximcol(a, n, m, i, j) == true && minimlinie(a, n, m, i, j) == true) || (maximlinie(a, n, m, i, j) == true && minimcol(a, n, m, i, j) == true))
            {
                rapsunsuri[k] = a[i][j];
                k++;
            }
        }
    }
    return rapsunsuri[0];
}
int main()
{
    int n, m, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << nr_sa(a, n, m);
}