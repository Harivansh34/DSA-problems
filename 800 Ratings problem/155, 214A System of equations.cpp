#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    
    int count=0;
    
    for(int a=0; a*a<=n; a++)
    {
        for(int b=0; b*b<=m; b++)
        {
            if(a*a+b==n && b*b+a==m)
            {
                count++;
            }
        }
    }
    
    cout<<count<<endl;
}