#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    
    bool found=false;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
           found=true;
           break;
        }
        
    }
    
    if(found)
    {
        cout<<"YES";
    }
    else
        {
        cout<<"NO";
        }
    return 0;
}