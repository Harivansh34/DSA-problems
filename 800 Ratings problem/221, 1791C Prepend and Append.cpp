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

        int l=n;
        
        string s;
        cin>>s;
        
        int count=0;
        
        for(int i=0; i<n; i++)
        {
            if(s[i]!=s[n-1])
            {
                count+=2;
                n--;
            }
            else
            {
                break;
            }
        }

        int len=l-count;
        cout<<len<<endl;
    }

    return 0;
}