#include <iostream>
using namespace std;

int main()
{
    int n;
    bool exista_0=true;
    cin >> n;
    do
    {
        int u_cif=n%10;
        if (u_cif==0)
        {
            n=n/10;
        }else
        {
            exista_0=false;
        }
    } while (exista_0==true);
    cout << n;
    return 0;
}