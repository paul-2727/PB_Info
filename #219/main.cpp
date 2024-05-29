#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a = m * n;
    while (a != 0)
    {
        int cnt = m;
        for (int i = a; cnt != 0; --i)
        {
            cout << i << " ";
            cnt--;
        }
        a -= m;
        cout << endl;
    }
    return 0;
}
