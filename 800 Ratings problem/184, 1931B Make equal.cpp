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

        vector<int> v;
        int sum=0;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;

            v.push_back(a);
            sum+=v[i];
        }

        int target=sum/n;
        int ans=0;

        bool ok=true;

        for(int i=0; i<n; i++)
        {
            ans+=v[i]-target;

            if(ans<0)
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
        
    }

    return 0;
}