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

        int maxim=0;
        int mini=INT_MAX;
        int maxp=0;
        int minp=0;

        for(int i=0; i<n; i++)
        {
            if(v[i]>maxim)
            {
                maxim=v[i]; 
                maxp=i;
            }
            if(v[i]<mini)
            {
                mini=v[i];
                minp=i;
            }
        }

        int l=min(minp, maxp);
        int r=max(minp, maxp);

        int left=r+1;
        int right=n-l;

        int sum=l+1+n-r;

        int ans=min({left, right, sum});

        cout<<ans<<endl;
    }

    return 0;
}