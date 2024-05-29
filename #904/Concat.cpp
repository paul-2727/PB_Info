#include <iostream>
using namespace std;

int concat(int a, int b) 
{
    int aux=b;
    while (aux>0)
    {
        a*=10;
        aux/=10;
    }
    a+=b;
    return a;
}

int main()
{
    
    return 0;
}