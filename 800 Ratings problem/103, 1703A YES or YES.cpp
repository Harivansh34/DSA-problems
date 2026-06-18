#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        bool found=false;
        
        for(int i=0; i<3; i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
            
        }
        
        for(int i=0; i<3; i++)
        {
             if(s[0]=='Y' && s[1]=='E' && s[2]=='S')
            {
                found=true;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
            
        
    }
    
     return 0;
}