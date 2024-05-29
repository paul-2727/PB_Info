#include<fstream>

using namespace std;

ifstream in("clase.in");
ofstream out("clase.out");

const int N=10000;
int clase[N],carti[N];

int main()
{
    int n,m,rez=0;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> clase[i];
    }
    in >> m;
    for (int i = 0; i < m; i++)
    {
        in >> carti[i];
    }
    for (int i = 0; i < n; i++)
    {
        int st=0,dr=m;
        int sol=-1;
        while(st <= dr)
        {
            int mid=(st+dr)/2;
            if (carti[mid]==i)
            {
                sol=mid;
            }
            if(carti[mid]> i)
            {
                dr = mid-1;
            }
            if(carti[mid] < i)
            {
                st = mid + 1;
            }
        }
        if (sol>=0)
        {
            rez++;
        }
    }
    out << rez;
    in.close();
    out.close();
    return 0;
}