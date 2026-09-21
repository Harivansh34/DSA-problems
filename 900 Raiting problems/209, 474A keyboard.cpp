#include<bits/stdc++.h>
using namespace std;

int main()
{
    char lr;
    cin>>lr;

    string s;
    cin>>s;

    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for(int i=0; i<s.length(); i++)
        {
            int pos=key.find(s[i]);
            
            if(lr=='R')
            {
                s[i]=key[pos-1];
            }
            else if(lr=='L')
            {
                s[i]=key[pos+1];
            }
        }

    cout<<s<<endl;

    return 0;
}