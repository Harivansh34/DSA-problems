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
        
        int first=0;
        int last=0; 
        int count=0;
        int count2=0;
        
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                first=i;
                count++;
                break;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            count2++;
            if(s[i]=='B')
            {
                last=i;
                count++;
            }
        }
        
       int len=last-first+1;
       
       cout<<len<<endl;
       
    }
    
    return 0;
}