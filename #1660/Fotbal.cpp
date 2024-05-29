#include <iostream>
using namespace std;
int scor(int dinamo, int rpid)
{
    if (dinamo == 0 || rpid == 0)
    {
        return 1;
    }
    else
    {
        return scor(dinamo - 1, rpid) + scor(dinamo, rpid - 1);
    }
}
int main()
{
    int dinamo, rpid;
    cin >> dinamo >> rpid;
    cout << scor(dinamo, rpid);
}