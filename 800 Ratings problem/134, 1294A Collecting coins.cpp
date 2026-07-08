#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a, b, c, n;
        cin>>a>>b>>c>>n;
        
        int counta=0;
        int countb=0;
        int countc=0;
        
        int maxim=max(a,max(b,c));
            
            if(maxim!=a)
            {
               counta=maxim-a;
            }
            if(maxim!=b)
            {
                countb=maxim-b;
            }
            if(maxim!=c)
            {
                countc=maxim-c;
            }
        
        int same=counta+countb+countc;
        int left=n-same;
        
        if(same>n)
        {
            cout<<"NO"<<endl;
        }
        else if(left%3==0)
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