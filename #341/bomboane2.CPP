#include <fstream>

using namespace std;

ifstream cin("bomboane.in");
ofstream cout("bomboane.out");

void sort(int v[],int poz[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                aux = poz[i];
                poz[i] = poz[j];
                poz[j] = aux;
            }
        }
    }
}

int main()
{
    int n,v[1000],poz[1000],medie=0,nr=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        poz[i]=i+1;
        cin >> v[i];
        medie+=v[i];
    }
    medie/=n;
    sort(v,poz, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i-1; j > 0; j--)
        {
            if (v[i]+(medie-v[j]) >= 2*medie && v[j]<medie)
            {
                v[i]-=(medie-v[j]);
                cout << poz[i] << " " << poz[j] << " " << medie-v[j] <<  endl;
                v[j]+=(medie-v[j]);
                nr++;
            }else 
            {
                j=0;
            }
        }
    }
    cout << nr;
    cin.close();
    cout.close();
    return 0;
}