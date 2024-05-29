#include <iostream>
using namespace std;

int factorial (int n)
{
    int rez=1;
    for (int i=1; i<=n; i++)
    {
        rez*=i;
    }
    return rez;
}

int sumfactcif (int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=factorial(n%10);
        n/=10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sumfactcif(n);
    return 0;
}