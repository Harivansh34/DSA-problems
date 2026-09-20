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

        sort(v.begin(), v.end());
        bool two=false;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int g=gcd(v[i],v[j]);

                if(g<=2)
                {
                    two=true;
                    break;
                }
            }
        }


        if(two)
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