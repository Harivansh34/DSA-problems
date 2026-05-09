#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int p[101];
    
    for(int i=1; i<=n; i++)
    {
        cin>>p[i];
    }
    
    int f[101];
    
    for(int i=1; i<=n; i++)
    {
        f[p[i]]=i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<f[i]<<" ";
    }
    
    return 0;
}