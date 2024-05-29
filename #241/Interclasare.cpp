#include <fstream>

using namespace std;

int main()
{
    ifstream in("Interclasare.in");
    ofstream out("Interclasare.out");
    int m, n;
    in >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        in >> a[i];
    }
    in >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        in >> b[i];
    }
    int x = m + n;
    int r[x];

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            r[k++] = a[i++];
        }
        else
        {
            r[k++] = b[j++];
        }
    }
    while (i < m)
    {
        r[k++] = a[i++];
    }
    while (j < n)
    {
        r[k++] = b[j++];
    }
    for (int aux = 0; aux <= k; aux++)
    {
        out << r[aux];
    }
    in.close();
    out.close();
    return 0;
}