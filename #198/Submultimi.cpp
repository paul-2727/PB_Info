#include <fstream>
using namespace std;

ifstream fin("submultimi.in");
ofstream fout("submultimi.out");

int x[10], n;

void afisare(int k)
{
    for (int i = 1; i <= k; ++i)
        fout << x[i] << ' ';
    fout << '\n';
}

void back(int k)
{
    for (int i = x[k - 1] + 1; i <= n; ++i)
    {
        x[k] = i;
        afisare(k);
        back(k + 1);
    }
}

int main()
{
    fin >> n;
    back(1);
    return 0;
}
