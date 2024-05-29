#include <iostream>
using namespace std;
int main()
{
    int n, m, k, ind = 0, a[11];
    cin >> n;
    while (n != 0)
    {
        a[++ind] = n % 10;
        n = n / 10;
    }
    for (int i = 1; i <= ind; ++i)
    {
        for (int j = 1; j <= ind; ++j)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
