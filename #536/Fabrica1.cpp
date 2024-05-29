#include <iostream>
using namespace std;

const int N=1000;
int v[N];

int main()
{
    int n,ob,timp=0;
    cin >> n >> ob;
    for (int i = 0; i <n; i++)
    {
        cin >> v[i];
    }
    while (ob>0)//mai exista obiecte neimpachetate
    {
        timp++;
        for (int i = 0; i <n; i++)
        {
            if (timp % v[i] == 0)//in secunda data un muncitor a terminat de impachetat un obiect
            {
                ob--;
            }
        } 
    }
    cout << timp;
    return 0;
}