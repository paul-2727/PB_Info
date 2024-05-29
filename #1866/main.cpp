#include <fstream>
#include <string.h>

ifstream in("prosir.in");
ofstream out("prosir.out");

using namespace std;

int main()
{
    char s[201];
    in.getline(s , 201);
    int i=0;
    while (i<strlen(s))
    {
        if(s[i+1]=='.'|| s[i+1]==' '&& s[i]!=' ')
            out << "5";
        else
            out << s[i];
        i++;
    }
    in.close();
    out.close();
}
