#include <iostream>
using namespace std;

int sub(int n , int& a , int& b)
{
    for(int i = n-1 ; 1 ; --i)
    {
        int cnt=0;
        for(int j = 1 ; j * j <= i ; ++j)
        {
            if(i%j==0)
            {
                cnt+=2;
            }
            if(j*j==i)
            {
                cnt--;
            }
        }
        if(cnt==2)
        {
            a=i;
            break;
        }
    }
    for(int i = n +1 ; 1 ; ++i)
    {
        int cnt=0;
        for(int j = 1 ; j * j <= i ; ++j)
        {
            if(i%j==0)
            {
                cnt+=2;
            }
            if(j * j == i)
            {
                cnt--;
            }
        }
        if(cnt==2)
        {
            b=i;
            break;
        }
    }
    return a;
    return b;
}

int main()
{
    
    return 0;
}