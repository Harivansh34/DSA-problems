#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a, b, c, x, y;
        cin>>a>>b>>c>>x>>y;

        int d=0;
        int cat=0;

        if(a>=x)
        {
            d=0;
        }
        else
        {
            d=abs(a-x);
        }
        if(b>=y)
        {
            cat=0;
        }
        else
        {
            cat=abs(b-y);
        }

        int total=d+cat;

        if(total<=c)
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