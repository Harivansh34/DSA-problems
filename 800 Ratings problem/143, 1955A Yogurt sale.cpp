#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t; 
    
    while(t--)
    {
        int n, a, b;
        cin>>n>>a>>b;
        
        int x=0;
        int y=0;
        
        if(n%2==0)
        {
            x=a*n;
            y=b*(n/2);
            
            int mini=min(x,y);
            cout<<mini<<endl;
        }
        else if(n%2!=0)
        {
            x=a*n;
            y=(b*(n/2))+a;
            int mini2=min(x,y);
            cout<<mini2<<endl;
        }
    }
    
    return 0;
}