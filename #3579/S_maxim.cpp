#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 100000;
const int UNDEFINED = -1;

int n;
vector<int> v(MAX_N);
vector<vector<int>> memo(MAX_N, vector<int>(2, UNDEFINED));

int SumaMaxima(int pozitie, int inclus) {
    if (pozitie > n) {
        return 0;
    }
    if (memo[pozitie][inclus] != UNDEFINED) {
        return memo[pozitie][inclus];
    }
    if (inclus == 1) {
        // Putem alege să includem valoarea de pe poziția curentă în sumă
        memo[pozitie][inclus] = v[pozitie - 1] + SumaMaxima(pozitie + 2, 0);
    } else {
        // Putem alege să excludem valoarea de pe poziția curentă din sumă
        memo[pozitie][inclus] = max(SumaMaxima(pozitie + 1, 1), SumaMaxima(pozitie + 1, 0));
    }

    return memo[pozitie][inclus];
}

int main() {
    // Citeste datele de intrare
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    // Apelează funcția recursivă și scrie rezultatul în fisier
    cout << SumaMaxima(1, 0) << endl;
    return 0;
}
