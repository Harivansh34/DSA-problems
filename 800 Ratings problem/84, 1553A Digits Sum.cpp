#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long n;
        cin>>n;
        
          int num=(n+1)/10;
        if(n==9)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<num<<endl;
        }
        
    }
    
    return 0;
}