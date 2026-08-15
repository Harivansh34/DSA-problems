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
        int x=0;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;

            v.push_back(a);

            sum+=v[i];
        }

        if(sum==n)
        {
            cout<<0<<endl;
        }
        else if(sum<n)
        {
            cout<<1<<endl;
        }
        else
        {
            x=sum-n;
            cout<<x<<endl;
        }
    }

    return 0;
}