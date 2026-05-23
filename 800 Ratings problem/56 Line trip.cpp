#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, x;
        cin>>n>>x;
        
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int total=v[0];
        
        for(int i=1; i<n; i++)
        {
            total=max(total,v[i]-v[i-1]);
        }
        
        total=max(total, 2*(x-v[n-1]));
        cout<<total<<endl;
        
    }
    
    return 0;
    
}