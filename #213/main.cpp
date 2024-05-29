#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            k = i * j;
            cout << k % 10 << " ";
        }
        cout << endl;
    }
    return 0;
}
