#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a, b, n;
        cin>>a>>b>>n;
        
        long long x=b;

        vector<long long> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            x+=min(v[i],a-1);
        }
        
        cout<<x<<endl;
    }

    return 0;
}