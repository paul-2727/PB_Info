#include <iostream>
using namespace std;


int NrZero(int a[], int n)
{
    int rez=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            rez++;
        }
    }
    return rez;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << NrZero(a,n);
    return 0;
}