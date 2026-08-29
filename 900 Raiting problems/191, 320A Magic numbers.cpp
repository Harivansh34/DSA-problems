#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool ok=true;

    string s=to_string(n);
    if(s[0]!='1')
        {
            ok=false;
        }

    for(int i=0; i<s.length(); i++)
    {
        if( i+2<=s.length() && (s[i]=='4' && s[i+1]=='4') &&(s[i+2]=='4'))
        {
            ok=false;
            break;
        }
        else if(s[i]!='1' && s[i]!='4')
        {
            ok=false;
            break;
        }
        
    }

    if(ok)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}