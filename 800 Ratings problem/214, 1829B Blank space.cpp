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

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int count=0;
        int len=0;
        
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                count++;
            }
            else
            {
                count=0;
            }
            
            len=max(len,count);
        }

        cout<<len<<endl;
    }

    return 0;
}