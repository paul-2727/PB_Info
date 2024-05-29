#include <iostream>
using namespace std;

int main()
{
    char ch[260];
    cin.getline(ch, 260);
    int l = 0, cnt = 0;
    int i = 0;
    int ok = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] == ' ')
        {
            if (l == cnt)
            {
                i -= l;
                int h = 0;
                while (ch[i] != ' ')
                {
                    cout << ch[i];
                    i++;
                    h++;
                }
                if (h)
                    cout << endl;
            }
            l = 0, cnt = 0;
        }
        else
        {
            cnt++;
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
                l++;
        }
        i++;
        if (ch[i] == '\0' && ok == 0)
            ch[i] = ' ', ch[i + 1] = '\0', ok++;
    }
    return 0;
}