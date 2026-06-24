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
        
        int x=n/3;
        
        int ans=x+(2*x);
        
        int result=n-ans;
        
        if(result==0)
        {
            cout<<x<<" "<<x<<endl;
        }
        else if((x+result)-x==1)
        {
            cout<<x+result<<" "<<x<<endl;
        }
        else
        {
            cout<<x<<" "<<x+result-1<<endl;
        }
    }
    return 0;
}