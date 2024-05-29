#include<fstream>

using namespace std;

ifstream in("paranteze.in");
ofstream out("paranteze.out");


void prelucrare()
{
    int deschise = 0, inchise = 0;
    for (int i = 0; i < n; i++)
    {
        if (sol[i] == 0)
        {
            deschise++;
        }
        else
        {
            inchise++;
        }
        if (inchise > deschise)
        {
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sol[i] == 0)
        {
            cout << '(';
        }
        else 
        {
            cout << ')';
        }
        
    }
    cout << '\n';
}



void btk(int p)
{
    if (p == 0)
    {
        prelucrare();
        return;
    }
    for (int i = n; i >= 1; i--)
    {
        if (!c[i])
        {
            sol[p-1] = i%2;
            c[i] = true;
            btk(p - 1);
            c[i] = false;
        }
    }
}

int main()
{
    in >> n;
    btk(n);
    in.close();
    out.close();
    return 0;
}