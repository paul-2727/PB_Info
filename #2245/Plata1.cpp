#include <iostream>
using namespace std;

int main()
{
    int n, suma;
    cin >> n >> suma;
    int val[6], nrb[6], rez[6] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> nrb[i];
    }
    for (int i = n; i >= 0; i--)
    {
        while (suma - val[i] >= 0 && nrb[i] > 0)
        {
            suma -= val[i];
            nrb[i]--;
            rez[i]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << rez[i] << " ";
    }
    return 0;
}