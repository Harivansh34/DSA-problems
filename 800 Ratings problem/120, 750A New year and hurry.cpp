#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int t=240-k;
    int ans=0;
    int solve=0;
    for(int i=1; i<=n; i++)
    {
        ans+=(5*i);
        
        if(t<ans)
        break;
        
        solve=i;
    }
    
    cout<<solve<<endl;
    return 0;
    
}