#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
        {
            long long a, b, c;
            cin>>a>>b>>c;

            int d1=a-1;
            int d2=abs(b-c);
            int d3=c-1;

            int s=d2+d3;

            if(d1<s)
            {
                cout<<1<<endl;
            }
            else if(s<d1)
            {
                cout<<2<<endl;
            }
            else if(d1==s)
            {
                cout<<3<<endl;
            }
        }

    return 0;
}