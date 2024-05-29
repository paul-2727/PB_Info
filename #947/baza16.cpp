#include <iostream>
using namespace std;

int main()
{
    int n,p=1;
    cin >> n;
    while (p*16<=n)
    {
        p=p*16;
    }
    do
    {
        int cif=n/p;
        if (cif<10)
        {
            cout << cif;
        }else
        {
            cout << (char)('A'+cif-10);
        }
        n%=p;
        p/=16;
    }while (p!=0);
    return 0;
}