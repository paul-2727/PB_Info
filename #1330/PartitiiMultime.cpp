#include <fstream>
using namespace std;

ifstream cin("partitiimultime.in");
ofstream cout("partitiimultime.out");

int x[10], n;

int maxim(int k)
{
    int maxi = 0;
    for (int i = 1; i < k; i++)
        maxi = max(x[i], maxi);
    return maxi;
}
void afisare()
{
    int maxi = maxim(n + 1);
    for (int i = 1; i <= maxi; i++)
    {
        for (int j = 1; j <= n; j++)
            if (x[j] == i)
                cout << j;
        cout << "*";
    }
    cout << '\n';
}

void back(int k)
{
    for (int i = 1; i <= maxim(k) + 1; i++)
    {
        x[k] = i;
        if (k == n)
            afisare();
        else
            back(k + 1);
    }
}

int main()
{
    cin >> n;
    x[1] = 1;
    back(2);
    return 0;
}