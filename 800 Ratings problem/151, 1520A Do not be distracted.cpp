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
        
        bool ok=true;
        map<char, int> last;
        
        for(int i=0; i<n; i++)
        {
            if(last.count(s[i]))
            {
                if(i-last[s[i]]!=1)
                {
                    ok=false;
                    break;
                }
            }
            last[s[i]]=i;
        }
        
        if(ok)
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