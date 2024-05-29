#include <iostream>
using namespace std;

int main()
{
    int n,k,p=1;
    cin >> n >>k;
    while (n!=0)
    {
        int aux=n%10;
        if (k!=aux)
        {
            p*=aux;
        }
        n/=10;
    }
    cout << p;
    return 0;
}