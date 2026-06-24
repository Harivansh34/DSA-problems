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
        
        sort(v.begin(), v.end());
        
        int mini=v[0];
        int sum=0;
        
        for(int i=1; i<n; i++)   // I have written earlier i=1 to i<=n for here sum+=v[i] i<=n is a bug and produce garbage value output which is harmful 
        {
            v[i]=v[i]-mini;
            sum+=v[i];
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}