#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long l, r;
        cin>>l>>r;
        
        long long lcm= l*(2*l)/__gcd(l,2*l);
        
        if((lcm>=l && lcm<=(2*l)) && (l>=l && 2*l<=r))
        {
            cout<<l<<" "<<2*l<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }
    
    return 0;
}