#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Funcția care calculează numărul minim de operații necesare
int numarMinimDeOperatii(const string &s, const string &t)
{
    int lungimeS = s.length();
    int lungimeT = t.length();
    // Inițializăm o matrice pentru a stoca rezultatele parțiale
    vector<vector<int>> dp(lungimeS + 1, vector<int>(lungimeT + 1, 0));
    // Completați matricea pe baza relației de recurență
    for (int i = 0; i <= lungimeS; i++)
    {
        for (int j = 0; j <= lungimeT; j++)
        {
            if (i == 0)
            {
                dp[i][j] = j;
            }
            else if (j == 0)
            {
                dp[i][j] = i;
            }
            else if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min( { dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] } );
            }
        }
    }
    return dp[lungimeS][lungimeT];
}

int main()
{
    // Citim șirurile de la tastatură
    string s, t;
    cin >> s >> t;
    // Calculăm și afișăm rezultatul
    int rezultat = numarMinimDeOperatii(s, t);
    cout << rezultat;
    return 0;
}
