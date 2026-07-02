#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int x, k;
        cin>>x>>k;
        
        int val1=0;
        int count=0;
        int val2=0; 
        
        if(x%k==0)
        {
            val1=x-1;
            val2=x-val1;
            count=2;
            
            cout<<count<<endl;
            cout<<val1<<" "<<val2<<endl;
        }
        else
        {
            val1=x;
            count=1;
            cout<<count<<endl;
            cout<<val1<<endl;
        }
    }
    
    return 0;
}