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
            int a;
            cin>>a;
            
            v.push_back(a);
        }
        
        int pos=0;
        int last=0;
        
        if(x>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(v[i]==1)
                {
                    pos=i;
                    break;
                }
            }
            for(int i=pos; i<n; i++)
            {
                if(v[i]==1)
                {
                    last=i;
                }
            }
           
            
            int len=last-pos+1;
            
            if(len<=x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        } 
    }
    
    return 0;
}