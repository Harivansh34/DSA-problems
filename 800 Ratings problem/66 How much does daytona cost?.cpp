#include<bits/stdc++.h>  
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
        }
        
        
        
        bool found=true;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=k)
            {
                found=false;
                
            }
            else if(v[i]==k)
            {
                found=true;
                break;
            }
        }
        
        if(found)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}