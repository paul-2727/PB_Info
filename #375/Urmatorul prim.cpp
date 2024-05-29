#include <iostream>
using namespace std;

bool e_prim (int n)
{
    if (n<2)
    {
        return false;
    }
    int d=2;
    while (d*d<=n)
    {
        if (n%d==0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n;
    bool gasit = false;
    cin >>n;
    while (gasit==false)
    {
        n++;
        int prim=e_prim(n);
        if(prim==true)
        {
            gasit=true;
        }
    }
    cout << n;
    return 0;
}