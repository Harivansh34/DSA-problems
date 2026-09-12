#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int> v;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        
        int best=1;
        int cur=1;

        for(int i=1; i<n; i++)
        {
            if(v[i]-v[i-1]<=k)
            {
                cur++;
            }
            else
            {
                cur=1;
            }

            best=max(best,cur);
        }

        int ans=n-best;
        cout<<ans<<endl;
    }
}