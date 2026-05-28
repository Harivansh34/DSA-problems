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
        
        bool itis=true;
        for(int i=0; i<n-1; i++)
        {
             if(v[i+1]-v[i]>1)
            {
               itis=false;
               break;
            }
        }
        
        if(itis)
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