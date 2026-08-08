#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long a, b;
        cin>>a>>b;
        
        if(a==0)
        {
            cout<<1<<endl;
        }
        else
        {
            int s=a+(b*2)+1;
            cout<<s<<endl;
        }
    }
    return 0;
}