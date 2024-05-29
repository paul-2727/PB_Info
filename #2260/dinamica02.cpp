#include <iostream>
using namespace std;

const int modulo = 777013;

int nrcuv(int l, int ult_lit, int n) //* număra cuvintele de lungime dată cu o literă dată la sfârșit.
{
    if (l == 1)
    {
        return 1;
    }
    int rez = 0;
    for (int doi_lit = 0; doi_lit < 26; ++doi_lit)
    {
        if (ult_lit != doi_lit)
        {
            rez += nrcuv(l - 1, doi_lit, n);
            rez %= modulo;
        }
    }
    return rez;
}

int cuv_cu_conditie(int n) //* toate literele posibile și adăugăm rezultatul pentru fiecare literă.
{
    int rez = 0;
    for (int ult_lit = 0; ult_lit < 26; ++ult_lit)
    {
        rez += nrcuv(n, ult_lit, n);
        rez %= modulo;
    }
    return rez;
}

int main()
{
    int n;
    cin >> n;
    int rez = cuv_cu_conditie(n);
    cout << rez;
    return 0;
}
