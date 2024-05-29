#include <iostream>
using namespace std;
int main()
{
    int n, a[22][22];
    cin >> n;
    int i = 1, j = 1, k = 1;
    while (i <= n)
    {
        if (k % 2 == 0 && k % 3 != 0)
        {
            a[i][j] = k;
            k++;
            j++;
            if (j == n + 1)
            {
                j = 1;
                i++;
            }
        }
        else
            k++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
