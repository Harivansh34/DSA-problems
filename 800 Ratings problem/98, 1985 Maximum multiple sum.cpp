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
        
        int k=0;
        int sum=0;
        int val=0;
        int best=0;
        
        
        for(int i=2; i<=n; i++)
        {
            k=n/i;
            
            sum=i*k*(k+1)/2;
            
            if(sum>best)
            {
                best=sum;
                val=i;
            }
            
        }
        
        cout<<val<<endl;
    }
    
    return 0;
}