#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, d;
        cin>>n>>d;

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        bool poss=true;

        if(v[n-1]<=d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=1; i<n; i++)
            {
                if((v[n-i]>d) && (v[0]<d && v[1]<d))
                {
                    v[n-i]=v[0]+v[1];
                }
                if(v[n-i]>d)
                {
                    poss=false;
                    break;
                }
            }

            if(poss)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}