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

int AP[81]={0};

int DouaNumere (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        int aux=sumcif(a[i]);
        AP[aux]++;
    }
    int aux = 81;
    while (aux > 0 && )
    {
        
    }
    return ;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << DouaNumere(a[],n);
    return 0;
}