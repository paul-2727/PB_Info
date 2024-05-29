#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int min1 = 1000000, min2 = 1000000;
    int max1 = -1000000, max2 = -1000000, max3 = -1000000;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] < min1)
        {
            min2 = min1;
            min1 = v[i];
        }
        else if (v[i] < min2)
        {
            min2 = v[i];
        }
        if (v[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = v[i];
        }
        else if (v[i] > max2)
        {
            max3 = max2;
            max2 = v[i];
        }
        else if (v[i] > max3)
        {
            max3 = v[i];
        }
    }
    long long produs1 = 1LL * min1 * min2;
    long long produs2 = 1LL * max1 * max2;
    cout << max(produs1, produs2);
    return 0;
}
