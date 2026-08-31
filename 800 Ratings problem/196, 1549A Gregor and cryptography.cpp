#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int p;
        cin>>p;

        int a=2;
        int r=p%2;

        int b=(p-r)/2;

        if(a==b)
        {
            b=p-r;
        }

        cout<<a<<" "<<b<<endl;
    }

    return 0;
}