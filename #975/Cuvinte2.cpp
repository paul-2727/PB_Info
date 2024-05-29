#include <iostream>

using namespace std;

bool palindrom(char s[])
{
    for (int i = 0, j = strlen(s) - 1; i < j; ++i, --j)
        if (s[i] != s[j])
            return 0;
    return 1;
}

int main()
{
    char s[256], *p, pal[11] = "zzzzzzzzzz";
    cin.getline(s, 256);
    p = strtok(s, " .,");
    bool gasit = false;
    while (p)
    {
        if (palindrom(p))
            if (strcmp(p, pal) < 0)
                strcpy(pal, p), gasit = 1;
        p = strtok(NULL, " .,");
    }
    if (gasit)
        cout << pal;
    else
        cout << "IMPOSIBIL";
    return 0;
}