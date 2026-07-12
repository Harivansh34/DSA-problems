#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        
        int ans=1;
        
        if(n%2==0 || m%2==0)
        {
            ans=(n*m)/2;
            cout<<ans<<endl;
        }
        else
        {
            if(n%2!=0 && m%2!=0)
            {
                ans=(n*m)/2+1;
                cout<<ans<<endl;
            }
        }
    }
    
    return 0;
}