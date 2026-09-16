#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin>>y>>w;
    
    int maxim=max(y,w);
    
    int a=7-maxim;
    int b=__gcd(a,6);
    
    cout<<a/b<<"/"<<6/b<<endl;
    
    return 0;
}