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

        int current=1;
        int maxim=1;

        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                current++;
            }
            else
            {
                current=1;
            }
            maxim=max(current,maxim);
        }

        cout<<maxim+1<<endl;
        
    }

    return 0;
}