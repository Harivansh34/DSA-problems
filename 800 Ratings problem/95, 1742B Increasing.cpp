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
        
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            
            v.push_back(a);
        }
        
        set<long long> s;
        
        for(int i=0; i<n; i++)
        {
            s.insert(v[i]);
        }
        
        if(s.size()==v.size())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}