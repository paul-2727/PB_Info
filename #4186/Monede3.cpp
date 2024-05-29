#include <iostream>
#include <vector>

using namespace std;

// Funcție de programare dinamică pentru a număra numărul de modalități
int numaraModalitati(int suma, const vector<int>& monede)
{
    int numarModuri = 0;
    int numarMonede = monede.size();
    // memo[i][j] va stoca numărul de modalități de a obține suma 'j' folosind primele 'i' monede
    vector<vector<int>> memo(numarMonede + 1, vector<int>(suma + 1, 0));
    // Există o singură modalitate de a obține suma 0, adică să nu selectăm nicio monedă
    for (int i = 0; i <= numarMonede; ++i)
        memo[i][0] = 1;
    // Completați tabela memo într-un mod de jos în sus
    for (int i = 1; i <= numarMonede; ++i) {
        for (int j = 1; j <= suma; ++j) {
            // Numărul de modalități inclusiv moneda curentă
            int includeMoneda = (j >= monede[i - 1]) ? memo[i][j - monede[i - 1]] : 0;
            // Numărul de modalități excluzând moneda curentă
            int excludeMoneda = memo[i - 1][j];
            // Numărul total
            memo[i][j] = includeMoneda + excludeMoneda;
        }
    }
    // Rezultatul este stocat în ultima celulă a tabelei memo
    return memo[numarMonede][suma];
}

int main()
{
    int suma, numarMonede;
    cin >> suma;
    cin >> numarMonede;
    vector<int> monede(numarMonede);
    for (int i = 0; i < numarMonede; ++i)
    {
        cin >> monede[i];
    }
    int numarModuri = numaraModalitati(suma, monede);
    cout << numarModuri << endl;
    return 0;
}
