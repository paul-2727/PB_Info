#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int MOD = 104659;
const int max_n = 1005;
const int max_M = 2005;

// Matricea pentru stocarea rezultatelor intermediare
int dp[max_n][26][26];

// Funcția pentru numărarea cuvintelor
int numaraCuvinte(int n, int M, pair<char, char> perechiInterzise[max_M])
{
    // Inițializăm cazul de bază pentru la cuvintelor 2
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < 26; ++j)
        {
            dp[2][i][j] = 1;
        }
    }
    // Calculăm numărul de cuvinte pentru fiecare lungime
    for (int l = 3; l <= n; ++l)
    {
        for (int i = 0; i < 26; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                for (int k = 0; k < 26; ++k)
                {
                    // Verificăm dacă perechea este interzisă
                    if (find(perechiInterzise, perechiInterzise + M, make_pair(char(i + 'a'), char(j + 'a'))) == perechiInterzise + M &&
                        find(perechiInterzise, perechiInterzise + M, make_pair(char(j + 'a'), char(k + 'a'))) == perechiInterzise + M)
                    {
                        // Actualizăm rezultatul
                        dp[l][j][k] = (dp[l][j][k] + dp[l - 1][i][j]) % MOD;
                    }
                }
            }
        }
    }
    // Calculăm rezultatul cinal
    int rez = 0;
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < 26; ++j)
        {
            rez = (rez + dp[n][i][j]) % MOD;
        }
    }
    return rez;
}

int main()
{
    ifstream cin("nrcuv.in");
    ofstream cout("nrcuv.out");
    int n, M;
    cin >> n >> M;
    pair<char, char> perechiInterzise[max_M];
    for (int i = 0; i < M; ++i)
    {
        cin >> perechiInterzise[i].first >> perechiInterzise[i].second;
    }
    int rez = numaraCuvinte(n, M, perechiInterzise);
    cout << rez << endl;
    cin.close();
    cout.close();
    return 0;
}
