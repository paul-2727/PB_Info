#include <fstream>
using namespace std;

ifstream cin("nrsubsircresc.in");
ofstream cout("nrsubsircresc.out");

const int N = 300, VAL = 1000000;
int nr[N] = {0}, memo[VAL] = {0};

int nrsubsircresc(int n)
{
    int val = nr[n];
    memo[val] = 1;
    while (nr[n] != 0)
    {
        n++;
        if (nr[n] > val)
        {
            memo[val] += nrsubsircresc(n);
        }
    }
    return memo[val];
}

int main()
{
    int n, rez = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        rez += nrsubsircresc(i);
    }
    cout << rez;
    cin.close();
    cout.close();
    return 0;
}
