
#include <fstream>
using namespace std;
ifstream in("s_p_c.in");
ofstream out("s_p_c.out");
char S[100][100] , P[100][100] , C[100][100];
int main()
{
    char s[100];
    int i = 0;
    int cnt1=0 , cnt2=0 , cnt3=0;
    while(in >> s)
    {
        int j=0;
        while(s[j]!='#')
            j++;
        if(s[j+1]=='S')
        {
            j = 0;
            while(s[j]!='#')
            {
                S[cnt1][j]=s[j];
                j++;
            }
            cnt1++;
        }
        else if(s[j+1]=='P')
        {
            j = 0;
            while(s[j]!='#')
            {
                P[cnt2][j]=s[j];
                j++;
            }
            cnt2++;
        }
        else if(s[j+1]=='C')
        {
            j = 0;
            while(s[j]!='#')
            {
                C[cnt3][j]=s[j];
                j++;
            }
            cnt3++;
        }
    }
    for(int i = 0 ; i < cnt1 ; ++i)
        for(int j = i + 1 ; j < cnt1 ; ++j)
            if(strcmp(S[i],S[j]) > 0)
                swap(S[i] , S[j]);
    for(int i = 0 ; i < cnt2 ; ++i)
        for(int j = i + 1 ; j < cnt2 ; ++j)
            if(strcmp(P[i],P[j]) > 0)
                swap(P[i] , P[j]);
    for(int i = 0 ; i < cnt3 ; ++i)
        for(int j = i + 1 ; j < cnt3 ; ++j)
            if(strcmp(C[i],C[j]) > 0)
                swap(C[i] , C[j]);
    for(int i = 0 ; i < cnt1 ; ++i)
        for(int j = 0 ; j < cnt2 ; ++j)
            for(int q = 0 ; q < cnt3 ; ++q)
                out << S[i] << ' ' << P[j] << ' ' << C[q] << endl;
    return 0;
}