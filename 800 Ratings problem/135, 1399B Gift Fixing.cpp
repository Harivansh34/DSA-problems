#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<long long> v;
        vector<long long> o;
        
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            
            v.push_back(a);
        }
        
        for(int i=0; i<n; i++)
        {
            long long b;
            cin>>b;
            
            o.push_back(b);
        }
        
        
        long long minc=LLONG_MAX;
        long long mino=LLONG_MAX;
        long long ans=0;
        
            for(int i=0; i<n; i++)
            {
                minc=min(minc, v[i]);
                mino=min(mino,o[i]);
            }
            for(int i=0; i<n; i++)
            {
                long long c=v[i]-minc;
                long long d=o[i]-mino;
                
                ans+=max(c,d);
            }
            
            cout<<ans<<endl;
        
    }
    return 0;
}