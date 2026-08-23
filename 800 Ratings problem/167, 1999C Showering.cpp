#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, s, m;
        cin>>n>>s>>m;
        
        bool min=false;
        int pre=0;
        
        for(int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;
            
            if(a-pre>=s)
            {
                min=true;
            }
            pre=b;
        }
        
        if(m-pre>=s)
        {
            min=true;
        }
        
        if(min)
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