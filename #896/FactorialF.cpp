#include <iostream>
using namespace std;

int factorial (int n)
{
    int rez=1;
    for (int i=0; i<n; i++)
    {
        rez*=i;
    }
    return rez;
}

int main()
{
    
    return 0;
}