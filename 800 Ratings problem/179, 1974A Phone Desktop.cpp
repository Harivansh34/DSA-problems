#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x, y;
        cin>>x>>y;

        int s=(y+1)/2;
        int e=0;

        if(y%2==0)
        {
            e=s*7;
        }
        else 
        {
            e=(s-1)*7+11;
        }

        if(x>e)
        {
            x-=e;
            s+=(x+14)/15;
        }
        
        cout<<s<<endl;
    }

    return 0;
}
