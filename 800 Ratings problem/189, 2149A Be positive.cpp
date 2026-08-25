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

        int counta=0;
        int countb=0;

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            if(v[i]==0)
            {
                counta++;
            }
            if(v[i]<0)
            {
                countb++;
            }

        }

        int neg=0;

        if(countb%2!=0)
        {
            neg+=2;
        }

        int ans=neg+counta;
        
        cout<<ans<<endl;
    }

    return 0;
}