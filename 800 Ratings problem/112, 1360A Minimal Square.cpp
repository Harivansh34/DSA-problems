#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        
        int mini=min(a,b);
        int maxim=max(a,b);
        
        int side=max(2*mini, maxim); // 2*mini is side 1 and max is side 2
       cout<<side*side<<endl;
    }
    
    return 0;
}