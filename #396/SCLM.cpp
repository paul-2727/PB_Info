#include <fstream>
using namespace std;

ifstream cin("sclm.in");
ofstream cout("sclm.out");

const int N = 1e5;
int secv[N];
int lMax[N];
int valMin[N + 1];

void refacSubsir(int poz, int val, int lungime)
{
    if (lungime == 0)
    {
        return;
    }
    if (secv[poz] <= val && lMax[poz] == lungime)
    {
        refacSubsir(poz - 1, secv[poz] - 1, lungime - 1);
        cout << poz << " ";
    }
    else
    {
        refacSubsir(poz - 1, val, lungime);
    }
}

int cautareBinar(int v[], int d, int val)
{
    int st = 1, dr = d, rez = 0;
    while (st <= dr)
    {
        int mij = (st + dr) / 2;
        if (v[mij] < val)
        {
            rez = mij;
            st = mij + 1;
        }
        else
        {
            dr = mij - 1;
        }
    }
    return rez;
}

int main()
{
    int n, pozLMax = 0, nrValMin = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> secv[i];
        int rezCautare = cautareBinar(valMin, nrValMin, secv[i]);
        lMax[i] = rezCautare + 1;
        if (rezCautare == nrValMin)
        {
            nrValMin++;
        }
        valMin[rezCautare + 1] = secv[i];
        if (lMax[i] > lMax[pozLMax])
        {
            pozLMax = i;
        }
    }
    cout << lMax[pozLMax] << "\n";
    refacSubsir(pozLMax, secv[pozLMax], lMax[pozLMax]);
    cin.close();
    cout.close();
    return 0;
}
