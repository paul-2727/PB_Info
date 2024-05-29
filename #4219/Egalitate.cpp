#include <iostream>
using namespace std;

int* Egalitate(int a[], int n)
{
    int ap[1000] = {0};
    for (int i = 0; i <n; i++)
    {
        ap[a[i]]++;
    }
    return ap;
}

int main()
{
    int n;
    cin >> n;
    int v[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << Egalitate(v,n);
    
    return 0;
}