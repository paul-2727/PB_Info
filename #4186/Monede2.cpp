#include <iostream>
#include <vector>

using namespace std;

// Funcția de backtracking
void numaraVariante(int suma, const vector<int> &monede, int index, int &numarModuri)
{
    // Cazul de bază: am atins suma dorită
    if (suma == 0)
    {
        numarModuri++;
        return;
    }
    // Cazul de bază: am epuizat monedele sau am depășit suma
    if (suma < 0 || index == monede.size())
    {
        return;
    }
    // Folosim moneda curentă și continuăm explorarea
    numaraVariante(suma - monede[index], monede, index, numarModuri);
    // Nu folosim moneda curentă și continuăm explorarea
    numaraVariante(suma, monede, index + 1, numarModuri);
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
    int numarModuri = 0; // Numărul de moduri
    numaraVariante(suma, monede, 0, numarModuri);
    cout << numarModuri << endl;
    return 0;
}