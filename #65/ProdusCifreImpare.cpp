#include <iostream>
using namespace std;
int main()
{
    int n, c, p = 1, c_i = 0;
    cin >> n;
    while (n > 0)
    {
        c = n % 10;
        if (c % 2 != 0)
        {
            p = p * c;
            c_i++;
        }
        n = n / 10;
    }
    if (c_i == 0)
    {
        cout << -1;
    }
    else
    {
        cout << p;
    }
    return 0;
}