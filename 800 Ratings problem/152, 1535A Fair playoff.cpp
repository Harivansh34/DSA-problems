#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int s1, s2, s3, s4;
        cin>>s1>>s2>>s3>>s4;
        
        int first=max(s1,s2);
        int second=max(s3,s4);
        
        int f1=min(s1,s2);
        int f2=min(s3,s4);
        
        if(f1>second || f2>first)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}