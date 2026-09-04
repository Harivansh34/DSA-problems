#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int moves=0;

        for(int i=0; i<k; i++)
        {
            if(s[i]!='R')
            {
                moves++;
            }
        }
        for(int i=n-1; i>(n-1)-k; i--)
        {
            if(s[i]!='L')
            {
                moves++;
            }
        }

        if(2*k>n)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<moves<<endl;
        }
    }

    return 0;
}