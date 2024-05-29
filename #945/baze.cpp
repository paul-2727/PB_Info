#include <iostream>
using namespace std;
int main()
{
    int n,a,b,putere=0,val=0;
    cin >> n >> a >> b;
    do 
    {
        int cif = n%10,aux=0;
        for (int i=0;i<putere;i++)
        {
            aux = aux*a;
        }
        val = val + cif;
    }while (n>0);
    cout << val;
    return 0;
}