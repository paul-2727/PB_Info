#include <fstream>

using namespace std;

int a[1000001], b[1000001], c[2000001];

ifstream in("interclasare1.in");
ofstream out("interclasare1.out");

int main()
{
    int n, m;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> a[i];
    }
    in >> m;
    for (int i = 0; i < m; i++)
    {
        in >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else if (b[j] < a[i])
        {
            c[k++] = b[j++];
        }
        else
        {
            c[k++] = a[i++];
            j++;
        }
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j < m)
    {
        c[k++] = b[j++];
    }
    int lin = 0;
    for (int p = 0; p < k; p++)
    {
        out << c[p];
        lin++;
        if (lin < 10)
        {
            out << " ";
        }
        else
        {
            out << "\n";
            lin = 0;
        }
    }
    in.close();
    out.close();
    return 0;
}