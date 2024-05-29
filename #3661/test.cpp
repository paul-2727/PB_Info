#include <iostream>
using namespace std;

const int MOD = 123457, N = 1000;

int memo[N] = {0};

int nr_c_1(int n)
{
    if (n == 1)
    {
        return 52;
    }
    return (nr_c_1(n - 1) * 50) % MOD;
}

int nr_c_2(int n)
{
    if (n >= 1)
    {
        return 26;
    }
    else
    {
        memo[n] = (nr_c_2(n - 1) + nr_c_2(n - 2)) * 26 % MOD;
    }
    return memo[n];
}

int nr_c_3(int n, int p)
{
    if (n == 1)
    {
        if (p >= 1)
        {
            return 21;
        }
        else
        {
            return 26;
        }
    }
    int rez = 0;
    for (int v = 0; v <= p; v++)
    {
        if (v > 0)
        {
            rez = (rez + nr_c_3(n - 1, v) * 21) % MOD;
        }
        else
        {
            rez = (rez + nr_c_3(n - 1, v) * 5) % MOD;
        }
    }
    return rez;
}

int main()
{
    int n, p;
    cin >> n >> p;
    // nr cuv de lungime n cu litere mici și mari, fără lit identice consecutive
    int c_1 = nr_c_1(n);
    cout << c_1 << " ";
    // nr cuv de lungime n cu lit mici și mari, fără două lit mari consecutive
    int c_2 = nr_c_2(n);
    cout << c_2 << " ";
    // nr cuv de lungime n cu lit mici și cel mult p vocale
    int c_3 = nr_c_3(n, p);
    cout << c_3 << '\n';
    return 0;
}
