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
        
        int count=1;
        if(n%4==0)
        {
            count=n/4;
            cout<<count<<endl;
        }
        else{
            count=(n-2)/4+1;
            cout<<count<<endl;
        }
    }
    
    return 0;
}