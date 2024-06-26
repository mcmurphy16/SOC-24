#include <iostream>
using namespace std;

int max(int r, int c)
{
    if(r>c)
    {
        return r;
    }
    return c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c, l;
        cin >> r >> c;
        l = max(r,c);
        int s[l][l];
        for(int i = 0; i<l; i++)
        {
            for(int j = 0; j<l; j++)
            {
                s[i][j] = i + j + 1
            }
        }
    }
}