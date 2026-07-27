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
        
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
        }
        
        sort(v.rbegin(), v.rend());
        
        int maxim=v[0];
        int count=0;
        int sum=0;
        
        for(int i=0; i<n; i++)
        {
            if(v[i]==maxim)
            {
                sum+=v[i];
                count++;
            }
        }
        
        int ans=sum/count;
        
        cout<<ans<<endl;
        
    }
    
    return 0;
}