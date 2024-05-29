#include <iostream>
using namespace std;

int sumcif(int x)
{
    int rez=0;
    while (x > 0)
    {
        rez+=x%10;
        x/=10;
    }
    return rez;
}

int main()
{
    
    return 0;
}