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
        
        int sum=0;
        bool make=false;
        
        for(int i=0; i<n-1; i++)
        {
            sum+=v[i];
            if(v[i+1]==sum)
            {
                make=true;
                break;
            }
        }
        
        if(make)
        {
            sort(v.begin(), v.end());
            swap(v[0],v[n-1]);
        }
        
        if(v[0]==v[n-1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        
        
    }
    
    return 0;
}