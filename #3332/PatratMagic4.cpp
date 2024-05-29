#include <iostream>
using namespace std;

int magic(int n)
{
    int i = 1,c=1;
    while (n > c)
    {
        i++;
        c=(i * (i*i + 1) / 2);
    }
    if (n == c)
    {
        return i;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << magic(n);
    return 0;
}