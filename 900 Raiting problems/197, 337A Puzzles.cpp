#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> v(m);

    for(int i=0; i<m; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    int r=m-n;
    int ans=INT_MAX;

    for(int i=0; i<=r; i++)
    {
        int d=v[i+n-1]-v[i];
        ans=min(ans, d);
    }

    cout<<ans<<endl;
    
    return 0;
}