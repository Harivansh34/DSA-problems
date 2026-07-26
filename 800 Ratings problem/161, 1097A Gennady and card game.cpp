#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s(1);
    
    for(int i=0; i<1; i++)
    {
        cin>>s[i];
    }
    
    bool found=false;
    
    vector<string> c(5);
    
    for(int i=0; i<=4; i++)
    {
        cin>>c[i];
        
        if(c[i][0]==s[0][0] || c[i][1]==s[0][1])
        {
            found=true;
            break;
        }
        else
        {
            continue;
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
    
    return 0;
}