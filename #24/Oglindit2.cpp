#include <iostream>
using namespace std;

int oglindit (int n)
{
    int rez=0,aux=1;
    while (n>0)
    {
        rez=aux*rez+n%10;
        aux*=10;
        n/=10;
    }
    return rez;
}

int main()
{
    int n;
    cin >> n;
    cout << oglindit(n);
    return 0;
}