#include <iostream>
using namespace std;

const int N = 100;
int sc[N][N];

int scor(int dinamo, int rpid)
{
    if (sc[dinamo][rpid] != 0)
    {
        return sc[dinamo][rpid];
    }
    if (dinamo == 0 || rpid == 0)
    {
        return 1;
    }
    sc[dinamo][rpid] =  scor(dinamo - 1, rpid) + scor(dinamo, rpid - 1);
    sc[rpid][dinamo] = sc[dinamo][rpid];
    return sc[dinamo][rpid];
}
int main()
{
    int dinamo, rpid;
    cin >> dinamo >> rpid;
    cout << scor(dinamo, rpid);
}