#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int x=min(n,m);
    int y=max(n,m);
    int i=n*m;

    int count=0;

    while(i>0)
    {
        x-=1;
        i-=y;
        count++;
    }

    if(count%2!=0)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }

    return 0;
}