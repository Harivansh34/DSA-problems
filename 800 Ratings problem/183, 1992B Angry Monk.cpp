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

        for(int i=0; i<k; i++)
        {
            int a;
            cin>>a;

            v.push_back(a);
        }

        sort(v.begin() , v.end());

        int big=v[k-1];
        int count=0;
        int ex=0;

        for(int i=0; i<k-1; i++)
        {
            if(v[i]==1)
            {
                count++;
            }
            else
            {
                ex+=(v[i]*2)-1;
            }
        }

        int ans=count+ex;

        cout<<ans<<endl;
    }

    return 0;
}