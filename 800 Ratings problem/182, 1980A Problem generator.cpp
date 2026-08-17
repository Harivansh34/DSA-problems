#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        string s;
        cin>>s;

        int ca=0;
        int cb=0;
        int cc=0;
        int cd=0;
        int ce=0;
        int cf=0;
        int cg=0;

        
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                ca++;
            }
            if(s[i]=='B')
            {
                cb++;
            }
            if(s[i]=='C')
            {
                cc++;
            }
            if(s[i]=='D')
            {
                cd++;
            }
            if(s[i]=='E')
            {
                ce++;
            }
            if(s[i]=='F')
            {
                cf++;
            }
            if(s[i]=='G')
            {
                cg++;
            }
        }

        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int e=0;
        int f=0;
        int g=0;

        if(m>ca)
        {
            a=m-ca;
        }
        if(m>cb)
        {
            b=m-cb;
        }
        if(m>cc)
        {
            c=m-cc;
        }
        if(m>cd)
        {
            d=m-cd;
        }
        if(m>ce)
        {
            e=m-ce;
        }
        if(m>cf)
        {
            f=m-cf;
        }
        if(m>cg)
        {
            g=m-cg;
        }

        int ans=a+b+c+d+e+f+g;
        cout<<ans<<endl;
    }

    return 0;
}