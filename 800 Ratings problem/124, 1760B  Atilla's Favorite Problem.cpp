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
        
        string s;
        cin>>s;
        
        char large=s[0]; //char
        
        for(int i=1; i<=n; i++)
        {
            if(large<s[i])
            {
                large=s[i];
            }
        }
        
        int len= large-'a'+1; // Very importent to check position
        
        cout<<len<<endl;
    }
    
    return 0;
}