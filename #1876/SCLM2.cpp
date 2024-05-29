#include <fstream>

using namespace std;

const int N = 1e5;

ifstream cin("sclm2.in");
ofstream cout("sclm2.out");

// Secvența de intrare
int secventa[N];
// Lungimile celor mai lungi subșiruri ne-descrescătoare care se termină la fiecare indice
int lungimiMaxima[N];
// Tabel de programare dinamică pentru a stoca valorile minime pentru subșiruri de diferite lungimi
int valoriMinime[N + 1];

// Căutare binară pentru a găsi cel mai mare indice unde x[rez] < val
int cautareBinar(int vector[], int dimensiune, int valoare)
{
    int stanga = 1, dreapta = dimensiune, rezultat = 0;
    while (stanga <= dreapta)
    {
        int mijloc = (stanga + dreapta) / 2;
        if (vector[mijloc] < valoare)
        {
            rezultat = mijloc;
            stanga = mijloc + 1;
        }
        else
        {
            dreapta = mijloc - 1;
        }
    }
    return rezultat;
}

int main()
{
    int n, pozitieLungimeMaxima = 0, numarValoriMinime = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> secventa[i];
        // Căutare binară pentru a găsi poziția potrivită pentru actualizarea eficientă a tablourilor
        int rezultatCautare = cautareBinar(valoriMinime, numarValoriMinime, secventa[i]);
        lungimiMaxima[i] = rezultatCautare + 1;
        if (rezultatCautare == numarValoriMinime)
        {
            numarValoriMinime++;
        }
        valoriMinime[rezultatCautare + 1] = secventa[i];
        if (lungimiMaxima[i] > lungimiMaxima[pozitieLungimeMaxima])
        {
            pozitieLungimeMaxima = i;
        }
    }
    // Afișează lungimea celui mai lung subșir
    cout << lungimiMaxima[pozitieLungimeMaxima];
    cin.close();
    cout.close();
    return 0;
}
