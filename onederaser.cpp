#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, c=0;
        cin>>n>>k;
        char s[n];
        cin>>s;
        for(int i=0; i<n; )
        {
            if(s[i]=='B')
            {
                c++;
                i = i + k;
            }
            else
            {
                i++;
            }
        }
        cout<<c<<endl;
    }
}